#include<iostream>
using namespace std;

void cubeByReference(int* nPtr){
	*nPtr = *nPtr *nPtr *nPtr;
}
int main(){
	int number{5};
	cout<<"the original value of number is: "<<number;
	cubeByReference(&number);
	cout<<"the new value of number is "<<number<<endl;
}


