#include<iostream>
using namespace std;
struct books{
	int id;
	int price;
	int pages;
	char name[30];
	char author[60];
	
};
main(){
    books b1,b2;
	cout<<"enter book name= ";
	cin>>b1.name;
	cout<<"enter id of book = ";
	cin>>b1.id;
	cout<<"enter price of book= ";
	cin>>b1.price;
	cout<<"enter no of pages of book= ";
	cin>>b1.pages;
	cout<<"enter name of author= ";
	cin>>b1.author;
	   
	cout<<"enter book name= ";
	cin>>b2.name;
	cout<<"enter id of book = ";
	cin>>b2.id;
	cout<<"enter price of book= ";
	cin>>b2.price;
	cout<<"enter no of pages of book= ";
	cin>>b2.pages;
	cout<<"enter name of author= ";
	cin>>b2.author;
    cout<<endl;
	if(b1.price>b2.price){
	cout<<"these are the details of book with greater salary: "<<endl;
	cout<<"the name of book is= "<<b1.name<<endl;
	cout<<"the id of book is= "<<b1.id<<endl;
	cout<<"the author of book is= "<<b1.author<<endl;
	cout<<"the price of book is= "<<b1.price<<endl;
	cout<<"the no of pages are= "<<b1.pages<<endl;
	}
	else{
	cout<<"these are the details of book with greater salary: "<<endl;
	cout<<"the name of book is= "<<b2.name<<endl;
	cout<<"the id of book is= "<<b2.id<<endl;
	cout<<"the author of book is= "<<b2.author<<endl;
	cout<<"the price of book is= "<<b2.price<<endl;
	cout<<"the no of pages are= "<<b2.pages<<endl;

	}				
	return 0;	
}
