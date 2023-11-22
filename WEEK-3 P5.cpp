#include <iostream>
using namespace std;
#include <cmath>

int main()
{char str1[50],str2[50];
int n,i,j,mainlen,sublen;

 cout << " ENTER THE STRING: \n ";  
    cin >> str1;  
    cout << " ENTER THE SUBSTRING TO BE INSERTED: \n";  
    cin >> str2; 
	cout<<"ENTER POSITION TO BE INSERTED: \n";
	cin>> n;
	
	for(i=0;str1[i]!='\0';i++)
	{mainlen++;
	}
	cout<<"\nNO.OF CHARACTERS IN STRING: \n"<<mainlen;
	for(i=0;str2[i]!='\0';i++)
	{sublen++;
	}
	cout<<"\nNO.OF CHARACTERS IN SUBSTRING: \n"<<sublen;
	for(i=mainlen;i>=n;i--)
	{str1[sublen+i]=str1[i];
	}
	for(i=0;i<sublen;i++)
	{str1[n+i]=str2[i];
	}
	cout<<"\nINCREMENTED STRING: \n"<<str1;
	return 0;
}

