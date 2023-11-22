#include<iostream>
using namespace std;
int main(){
	char s1[100],s2[100];
	int flag=1;
	cout<<"ENTER 1ST STRING: ";
	cin>>s1;
	cout<<"ENTER 2ND STRING: ";
	cin>>s2;
	for(int i=0;s1[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<"STRING ARE EQUAL";
	}
	else{
		cout<<"STRINGS ARE NOT EQUAL ";
	}
}
