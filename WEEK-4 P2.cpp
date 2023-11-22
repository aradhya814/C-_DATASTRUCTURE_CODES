#include<iostream>
using namespace std;
	int gcd(int a,int b){
		if(a>=b&&a%b==0){
			return b;
		}
		else{
			return gcd(b,a%b);
		}
	}
	int main(){
		int n,m,r;
		cout<<"ENTER THE FIRST NO.: ";
		cin>>n;
		cout<<"ENTER THE SECOND NO.: ";
		cin>>m;
		r=gcd(n,m);
		cout<<"THE GCD OF "<<n<<" AND "<<m<<" IS "<<r;
		return 0;
	}
