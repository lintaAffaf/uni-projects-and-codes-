#include<iostream>
using namespace std;
struct employee{
	int id;
	int salary;
	char name[30];
	char designation[40];
	
};
main(){
	employee e1,e2;
	cout<<"enter employee 1 name= ";
	cin>>e1.name;
	cout<<"enter employee 2 name= ";                                            
	cin>>e2.name;
	cout<<"enter id of employee 1= ";
	cin>>e1.id;
	cout<<"enter id of employee 2= ";
	cout<<e2.id;
	cout<<"enter employee 1 designation= ";
	cout<<e1.designation;
	cout<<"enter employee 2 designation= ";
	cout<<e2.designation;
	cout<<"enter employe 1 salary= ";
	cin>>e1.salary;
	cout<<"enter employee 2 salary= ";
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
