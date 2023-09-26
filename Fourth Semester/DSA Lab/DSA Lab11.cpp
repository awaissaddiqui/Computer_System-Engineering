#include <iostream>
using namespace std;

struct HashTableEntry {
    int key;
    int value;
};

class HashMapTable {
private:
    int tableSize;
    HashTableEntry* table; // declare a pointer to dynamically allocate memory to table

public:
    HashMapTable(int size) {
        tableSize = size;
        table = new HashTableEntry[size];
        for (int i = 0; i < tableSize; ++i) {
            table[i].key = -1;
            table[i].value = -1;
        }
    }

    ~HashMapTable() {
        delete[] table;
    }

    int hashFunc(int key) {
        return key % tableSize;
    }
    void insert(int key, int value) {
        int hash = hashFunc(key);
        int initialHash = -1;
        int i = hash;

        while (table[i].key != -1 && table[i].key != key) {
            if (initialHash == -1)
                initialHash = i;
            i = (i + 1) % tableSize;
            if (i == initialHash)
                return; // Hash table is full
        }

        table[i].key = key;
        table[i].value = value;
    }

    int searchKey(int key) {
        int hash = hashFunc(key);
        int initialHash = -1;
        int i = hash;

        while (table[i].key != -1) {
            if (table[i].key == key)
                return table[i].value;
            i = (i + 1) % tableSize;
            if (i == initialHash || (table[i].key != -1 && table[i].key == key))
                break;
        }

        return -1; // Element not found
    }
};

int main() {
    int tableSize;
    cout << "Enter the table size: ";
    cin >> tableSize;

    HashMapTable map(tableSize); //map is object 

    // Insert elements
    map.insert(5, 133);
    map.insert(15, 40);
    map.insert(25, 30);
    map.insert(35, 40);
    map.insert(45, 50);

    // Search for an element
    int searchKey;
    cout << "Enter the key to search: ";
     cin >> searchKey;
    int result = map.searchKey(searchKey);
    if (result != -1)
         cout << "Value found: " << result <<  endl;
    else
         cout << "Value not found." <<  endl;

    return 0;
}

