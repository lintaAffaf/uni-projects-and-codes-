#include<iostream>
using namespace std;

void displayTriangle(int height){
	for(int i=1;i<=height;++i){
	
	for(int j = 1; j<=i; ++j)
	{
			cout<<"*";
	}
	cout<<endl;
	}
	
}
int main(){
	int height;
	cout<<"enter the height of triangle: "<<endl;
	cin>>height;
	displayTriangle(height);
	return 0;
}
