#include<iostream>
using namespace std;
inline double conversion(double x,double y){
	if(x>0){
		return y=2.2*x;
	}else{
		return 0;
	}
}
int main(){
	double kilo;
	double pounds;
	cout<<"enter your weight in kilograms: "<<endl;
	cin>>kilo;
	cout<<"your weight in pounds is: "<<conversion(kilo,pounds)<<endl;
	return 0;
}
