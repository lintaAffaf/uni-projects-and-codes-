#include<iostream>
using namespace std;

void displaytriangle(int height)
{
	for(int i=1;i<=height;++i){
		for(int j=1;j<=i;++j){
			cout<<"*";
		}
		cout<<endl;
	}
}
main(){
	int x;
	cout<<"enter the height of triangle: "<<endl;
	cin>>x;
	displaytriangle(x);
	return 0;
}
