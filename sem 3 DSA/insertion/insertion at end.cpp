#include <iostream>
using namespace std;

int main()
{
	  int arr[10];
	  int a,b;                                                                                                  ;
	  cout<<"enter the size of array "<<endl;
	  cin>>a;
	  cout<<"enter values in array: "<<endl;
	  for(int i=0; i<a; i++){
	  	cin>>arr[i];
	  }
	  cout<<"enter the number you want to add in the end of  array : "<<endl;
	  cin>>b;
      
	  arr[a]=b;
	  a++;
	  
	  cout<<"array after insertion is "<<endl;
	  for (int i=0;i<a;i++){
	  	cout<<arr[i]<<endl;
	  }
	return 0;
}
