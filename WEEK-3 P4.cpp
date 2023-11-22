#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char a[10],b[10],c[10];
	int p=0,r=0,i=0;
	int t=0,x,g,s,n,o;
	puts("ENTER THE 1ST STRING: ");
	gets(a);
	puts("ENTER THE 2ND STRING: ");
	gets(b);
	cout<<"ENTER POSITION TO BE INSERTED: ";
	cin>>p;
	r=strlen(a);
	n=strlen(b);
	while(i<=r){
		c[i]=a[i];
		i++;
	}
	s=n+r;
	o=p+n;
	for(i=p;i<=s;i++){
		if(n!=0){
			a[i]=b[t];
			t++;
		}
		a[0]=c[i];
		o=o+1;
	}
	cout<<a;
	return 0;
}
