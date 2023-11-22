#include<iostream>
using namespace std;
int c,c1=0,c2=0;
void Tower(int n,char src, char aux,char des){
	if(n==1){
		cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<"\n";
		c1++;
		return;
	}
	else{
		Tower(n-1,src,des,aux);
		cout<<"Move disk "<<n<<" from "<<src<<" to "<<des<<"\n";
		Tower(n-1,aux,src,des);
		c2++;
	}
}
int main(){
	int a;
	cout<<"ENTER THE NUMBER OF DISKS: ";
	cin>>a;
	Tower(a,'A','B','C');
	c=c1+c2;
	cout<<"THE TOTAL NO.OF MOVES= "<<c;
	return 0;
}
