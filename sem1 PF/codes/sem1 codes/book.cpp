#include<iostream>
using namespace std;
struct distances{
	int inches;
	int feet;
};
main(){
    distances d1,d2;
	cout<<"enter distance 1 in feet= ";
	cin>>d1.feet;
	cout<<"enter distance 1 in inches= ";
	cin>>d1.inches;
	cout<<"enter distance 2 in feet= ";
	cin>>d2.feet;
	cout<<"enter distance 2 in inches= ";
	cin>>d2.inches;
	int sumi; 
	int sumf; 

	sumi= d1.inches + d2.inches;
	sumf= d1.feet + d2.feet;

	if(sumi > 12){
    cout<<sumf;
    sumf++;
    sumi = sumi- 12;
	}

	cout<<"total distance in feet= "<<sumf<<endl;
	cout<<"total distance in inches= "<<sumi<<endl;		
	return 0;	
}
