#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int top,i,size,choice;
	char a,s[50],exp[50];
	top=-1;
	cout<<"Enter the expression: \n";
	cin.getline(exp,40);
	i=0;
	while(s[i]!='\0'){
		if ((exp[i]=='(') || (exp[i]=='{') || (exp[i]=='['))
		{
			top++;
			s[top]=exp[i];
			cout<<" "<<s[top]<<" "<<top<<"\n";
		}
		else if ((exp[i]==')') || (exp[i]=='}') || (exp[i]==']'))
		{
			if ((exp[i]==')') && (s[top]=='('))
			{
				top--;
				cout<<top<<" ()"<<"\n";
			}
			else if ((exp[i]==']') && (s[top]=='['))
			{
				top--;
				cout<<top<<" []"<<"\n";
			}
			else if ((exp[i]=='}') && (s[top]=='{'))
			{
				top--;
				cout<<top<<" {}"<<"\n";
			}
//			else 
//			{
//				cout<<"Error";
//				break;
//			}
		}
		i++;
	}
	if (top==-1)
	{
		cout<<"The expression is correct.";
	}
	else 
	{
		cout<<"Error";
	}
	i++;
	return 0;
}
