#include <iostream>
using namespace std;

int main()
{
	  int arr[10];
	  int a,b,position;
	  cout<<"enter the size of array "<<endl;
	  cin>>a;
	  cout<<"enter values in array: "<<endl;
	  for(int i=0; i<a; i++){
	  	cin>>arr[i];
	  }
	  cout<<"enter the number you want to add at a specific position in  array : "<<endl;
	  cin>>b;
	  
	  cout<<"enter position of insertion";
	  cin>>position;
	  
	  for(int i=a;i>position-1;i--){
	  	arr[i]=arr[i-1];
	  }
	  arr[position]=b;
	  a++;

	  cout<<"array after insertion is "<<endl;
	  for (int i=0;i<a;i++){
	  	cout<<arr[i]<<endl;
	  }
	return 0;
}
