#include<iostream>
using namespace std;
int op(int a,int b,char c);
main()
{
	int x,y;
	char z;
	cout<<"enter number 1: ";
	cin>>x;
	cout<<"enter number 2: ";
	cin>>y;
	cout<<"enter operator: ";
	cin>>z;
    op(x,y,z);
	return 0;
}
  int op(int a,int b,char c)
  {
  	switch(c){
  		case '+':
		cout<<"sum= "<<a+b;
		break;
		case '-':
		cout<<"sub= "<<a-b;
		break;
		case '*':
		cout<<"product= "<<a*b;
		break;
		case '/':
		cout<<"divide= "<<a/b;
		break;
		deafult:
		cout<<"invalid ";
	  }  
	   }
  

