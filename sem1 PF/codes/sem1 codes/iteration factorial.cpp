#include<iostream>
#include<iomanip>
using namespace std;

unsigned long factorial(unsigned int number){
          unsigned int result{1};
          for(unsigned int i{number};i>=1;--i){
          	result*=i;
		  }
		  return result;
}
int main(){
	unsigned int x;
	for(unsigned counter{0};counter<=10;++counter){
	
		cout<<"the factorial  "<<setw(2)<< counter <<" is "<<factorial(counter)<<endl;
    
	}

	return 0;
	}
