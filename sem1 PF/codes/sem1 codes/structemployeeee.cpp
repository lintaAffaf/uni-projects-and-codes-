#include<iostream>
using namespace std;
struct employee{
	int id;
	int salary;
	char name[30];
	char designation[60];
	
};
main(){
	employee e1,e2;
	cout<<"enter employee  name= ";
	cin>>e1.name;
	cout<<"enter id of employee = ";
	cin>>e1.id;
	cout<<"enter employee designation= ";
	cin>>e1.designation;
	cout<<"enter employee salary= ";
	cin>>e1.salary;
	cout<<"enter employee  name= ";
	cin>>e2.name;
	cout<<"enter id of employee = ";
	cin>>e2.id;
	cout<<"enter employee designation= ";
	cin>>e2.designation;
	cout<<"enter employee salary= ";
	cin>>e2.salary;


	if(e1.salary>e2.salary){
	cout<<"the name of employee is= "<<e1.name<<endl;
	cout<<"the id of employee is= "<<e1.id<<endl;
	cout<<"the designation of employee is= "<<e1.designation<<endl;
	cout<<"the salary of employee is= "<<e1.salary<<endl;}
	else{
	cout<<"the name of employee is= "<<e2.name<<endl;
	cout<<"the id of employee is= "<<e2.id<<endl;
	cout<<"the designation of employee is= "<<e2.designation<<endl;
	cout<<"the salary of employee is= "<<e2.salary<<endl;
		
	}				
	return 0;	
}
