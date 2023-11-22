#include<iostream>
using namespace std;
int main(){
	char a[100],b[100],c[100];
	int i,l,x;
	cout<<"\n\nSTRING LENGTH :\n";
	cout<<"ENTER THE FIRST STRING: ";
	cin>>a;
	for(i=0;a[i]!='\0';i++){
		x=i+1;
	}
	cout<<"\nTHE LENGTH OF\t"<<a<<"\tIS: "<<x;
	cout<<"\n";
	cout<<"\n\nSTRING CONCATENATION :\n";
	cout<<"ENTER THE SECOND STRING: ";
	cin>>b;
	for(i=0;a[i]!='\0';i++){
		c[i]=a[i];
		l=i;
	}
	for(i=0;b[i]!='\0';i++){
		c[l+1]=b[i];
		l++;
	}
	cout<<"\nAFTER CONCATENATION OF "<<a<<" AND "<<b<<" IS: "<<c;
	return 0;
}
