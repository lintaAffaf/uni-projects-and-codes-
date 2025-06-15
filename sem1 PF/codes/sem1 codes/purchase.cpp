#include<iostream>
using namespace std;

int calculatebill(int mangoes[],int oranges[],int bananas[],int n){
	int mangoprice=20;
	int orangeprice=10;
	int bananaprice=5;

	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"customer no.\t"<<"mangoes\t"<<"oranges\t"<<"bananas\t"<<"totalbill\n";
	cout<<"------------------------------------------------------------------------------------"<<endl;

	for(int i=0;i<n;i++) {
		int totalbill=mangoes[i]*mangoprice+oranges[i]*orangeprice+bananas[i]*bananaprice;
		cout<<i+1<<"\t\t"<<mangoes[i]<<"\t"<<oranges[i]<<"\t"<<bananas[i]<<"\t"<<totalbill<<"\n";
	}	
}
 main(){
	int num;
	int mangoes[num];
	int oranges[num];
	int bananas[num];
	int i;
	cout<<"enter number of customers: "<<endl;
	cin>>num;
	for(int i=0;i<num;i++){
			cout<<"enter no of mangoes purchased by customer "<<i+1<<endl;
			cin>>mangoes[i]; 
			cout<<"enter no of oranges purchased by customer "<<i+1<<endl;
			cin>>oranges[i]; 
			cout<<"enter no of bananas purchased by customer "<<i+1<<endl;
			cin>>bananas[i]; 
	}  
	  calculatebill(mangoes,oranges,bananas,num);
	return 0;
	 
}
