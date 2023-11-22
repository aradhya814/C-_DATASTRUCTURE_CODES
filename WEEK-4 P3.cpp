#include<iostream>
using namespace std;
int fib(int b){
	int i=0,j=1,k;
	if(b<=0){
		cout<<"INVALID I\P!!";
	}
	else if(b==2){
		return 1;
	}
	else if(b==1){
		return 0;
	}
	else if(b>2){
		k=fib(b-2)+fib(b-1);
		return k;
	}
}
int fib1(int c){
	int i=0,j=1,k;
	if(c<=0){
		cout<<"INVALID I\P!!";
	}
	else if(c==2){
		cout<<1<<"\t";
		return 1;
	}
	else if(c==1){
		cout<<0<<"\t";
		return 0;
	}
	else if(c>2){
		k=fib(c-2)+fib1(c-1);
		cout<<k<<"\t";
		return k;
	}
}
int fibo(int n){
	if(n<=1){
		return n;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int i,m;
	cout<<"'ENTER THE NUMBER OF TERMS TO FIND FIBONACCI: ";
	cin>>m;
	if(m!=1){
		cout<<0<<"\t";
	}
	i=fib1(m);
	cout<<"\n";
	cout<<"THE SUM IS: ";
	cout<<(fibo(m-2)+fibo(m-1));
	cout<<fibo(m);
	return 0;
}
