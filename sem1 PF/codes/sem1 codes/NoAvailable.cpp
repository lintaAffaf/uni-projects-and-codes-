#include<iostream>
using namespace std;
int store(int arr[],int n)
{
	int temp;
	for(int j=0;j<=9;j++) {
	if(n==arr[j])
		temp++;
	}
	if(temp!=0)
	cout<<"number is available.";
	else
	cout<<"number is not available.";
}
 main()
 {
	int m;
	
	int a[10];
	cout<<"enter 10 values in array: ";
	for(int i=0;i<=9;i++)
	cin>>a[i];
	cout<<"enter value: ";
	cin>>m;
	store(a,m);
}
