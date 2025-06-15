#include<iostream>
using namespace std;

int main(){
	int arr[10];
	  int a,b;
	  cout<<"enter the size of array "<<endl;
	  cin>>a;
	  cout<<"enter values in array: "<<endl;
	  for(int i=0; i<a; i++){
	  	cin>>arr[i];
	  }
	   cout<<"enter the number you want to delete in the array : "<<endl;
	  cin>>b;
		for(int i=0;i<a;i++) {
			  arr[i]=arr[i+1];
	}

 cout<<"array after deletion is "<<endl;
	  for (int i=0;i<a-1;i++){
	  	cout<<arr[i]<<endl;
	  }
	return 0;
}
