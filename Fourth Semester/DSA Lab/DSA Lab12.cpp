#include <iostream>
using namespace std;
class Graph {
private:
    int numVertices;
    int** adjacencyMatrix; 
	// we are creating a pointer that can be used to
	// allocate dynamic memory for a two-dimensional array of integers.

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjacencyMatrix = new int*[numVertices];
        for (int i = 0; i <numVertices; i++) {
            adjacencyMatrix[i] = new int[numVertices];
            for (int j = 0; j < numVertices; j++) {
                adjacencyMatrix[i][j] = 0;
            }
        }
    }

    void addEdge(int source, int destination) {
        if (source >= 0 && source < numVertices && destination >= 0 && destination < numVertices) {
            adjacencyMatrix[source][destination] = 1;
            adjacencyMatrix[destination][source] = 1;
        }
    }
    void removeEdge(int source, int destination) {
        if (source >= 0 && source < numVertices && destination >= 0 && destination < numVertices) {
            adjacencyMatrix[source][destination] = 0;
            adjacencyMatrix[destination][source] = 0;
        }
    }

    bool hasEdge(int source, int destination) {
        if (source >= 0 && source < numVertices && destination >= 0 && destination < numVertices) {
            return adjacencyMatrix[source][destination] == 1;
        }
        return false;
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                 cout << adjacencyMatrix[i][j] << " ";
            }
             cout <<endl;
        }
    }

    ~Graph() {
        for (int i = 0; i < numVertices; i++) {
            delete[] adjacencyMatrix[i];
        }
        delete[] adjacencyMatrix;
    }
};
int main() {
    int numVertices, numEdges;
    cout << "Enter the number of vertices: ";
     cin >> numVertices;

    Graph graph(numVertices);

     cout << "Enter the number of edges: ";
     cin>>numEdges;

     cout << "Enter the edges (source, destination):" << endl;
    for (int i = 0; i <numEdges; i++) {
        int source, destination;
         cin >> source >> destination;
        graph.addEdge(source, destination);
    }

     cout << "Graph Adjacency Matrix:" <<  endl;
    graph.printGraph();

    return 0;
}

