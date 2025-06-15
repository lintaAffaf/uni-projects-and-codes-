#include<iostream>
#include<cmath>
using namespace std;

int power(int x,int y){
	if(y==1){
		return x;
	}else{
		return x*power(x,y-1);
	}
}
int main(){
	int base;
	int exponent;
	cout<<"enter the base number: ";
	cin>>base;
	cout<<"enter the exponent number: ";
	cin>>exponent;
	cout<<"the "<<base <<" raised to power "<<exponent<< " is " <<power(base,exponent);
	
}
