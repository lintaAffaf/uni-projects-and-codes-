#include<iostream>
using namespace std;

int main(){
	const int size=10;
	int arr[size];
	int sum=0;
	cout<<"write 10 values of integer: "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;++i){
		sum+=arr[i];
	}
	cout<<"the sum of array is: "<<sum<<endl;
	return 0;
}
