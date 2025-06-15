#include<iostream>
using namespace std;

void displayTriangle(int height,char sign){
	for(int i=1;i<=height;++i){
	
	for(int j = 1; j<=i; ++j)
	{
			cout<<sign;
	}
	cout<<endl;
	}
	
}
int main(){
	char sign; int height;
	cout<<"enter the height of triangle: "<<endl;
	cin>>height;
	cout<<"enter the sign of triangle: "<<endl;
	cin>>sign;
	displayTriangle(height,sign);
	return 0;
}
