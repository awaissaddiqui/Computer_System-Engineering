#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class employee{
	private:
		char *name, *department;
		double salary, service;
	public:
		employee():name("Awais"),department("DCSE"),salary(10000),service(10){};
		employee(char n[], char dep[], double sal, double ser):name(n),department(dep),salary(sal),service(ser){};
		employee(const employee &test){
			int nameLength = strlen(test.name);
			int depLength = strlen(test.department);
			 name = new char[nameLength+1];
			 department = new char[depLength+1];
			 strcpy(name, test.name);
			 strcpy(department, test.department);
			 salary = test.salary;
			 service = test.service;
		}
			void input(){
			int nameLength = strlen(name);
             name = new char [nameLength + 1];
             cout<<"\nEnter Your Data !!!"<<endl;
            cout<<"\nname:\t";
            gets(name);
            int depLength = strlen(department);
            department = new char [depLength + 1];
            cout<<"Department:\t";
            gets(department);
			cout<<"Salary : ";
			cin>>salary;
			cout<<"Service In Years : ";
			cin>>service;
		}
		void show()
		{
			cout<<"Employee Data"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Department : "<<department<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"Service : "<<service<<endl;
		}
		~employee(){
			cout<<"\nObject Destroyed...";
			delete[] name;
			delete[] department;
		}
};
main(){
	employee obj1;
	obj1.show();
	obj1.input();
	obj1.show();
	cout<<endl;

}