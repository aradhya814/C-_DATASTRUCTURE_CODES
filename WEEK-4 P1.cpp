#include<iostream>
using namespace std;
int main(){
	int num,fact,factorial(int n);
	cout<<"ENTER A NUMBER TO FIND FACTORIAL: ";
	cin>>num;
	cout<<"THE FACTORIAL OF "<<num<<" IS "<<factorial(num);
	return 0;
}
int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
	}
	else{
		return 1;
	}
}
