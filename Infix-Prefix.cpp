#include<iostream> 
#include<string.h> 
using namespace std; 
int spre,epre; 
int i,n,top=-1,j; 
char pre[50],exp[100],stack[50],exp1[500];
string ans; 
void popall () 
{ 
if (exp[i]==')') 
{ 
top--; 
} 
else  
{ 
for (int i=top;i>=0;i--) 
{ 
if (stack[i]==')') 
        { 
        top--; 
        //cout<<"Popped ( \n"; 
        return; 
        } 
        else 
        { 
        //cout<<"Popped"<<stack[i]<<"\n"; 
        ans+=stack[i]; 
} 
} 
} 
} 
void popallstack() 
{ 
for (int i=top;i>=0;i--) 
{ 
if (stack[i]==')') 
        { 
        //cout<<" Not to be Popped ( \n"; 
        } 
        else 
        { 
        //cout<<"Popped"<<stack[i]<<"\n"; 
        ans+=stack[i]; 
} 
} 
} 
void push()  
{ 
ans+=" "; 
    top++;  
    stack[top]=exp[i]; 
    //cout<<"Pushed "<<stack[top]<<" at "<<top<<"\n"; 
} 
void push_nospace()  
{ 
    top++;  
    stack[top]=exp[i]; 
    //cout<<"Pushed "<<stack[top]<<" at "<<top<<"\n"; 
} 
void pop() 
{ 
if (exp[i]==')') 
{ 
top--; 
//cout<<"Popped ( \n"; 
return; 
} 
else  
{ 
ans+=stack[top]; 
//cout<<"Popped "<<stack[top]<<"\n"; 
top--; 
} 
} 
void eprecedence(){ 
if (exp[i]=='(' || exp[i]==')') 
{ 
epre=3; 
} 
else if (exp[i]=='/' || exp[i]=='*') 
{ 
epre=2; 
} 
else if (exp[i]=='+' || exp[i]=='-') 
{ 
epre=1; 
}} 
void sprecedence(){ 
if (stack[top]=='(' || stack[top]==')') 
{ 
spre=3; 
} 
else if (stack[top]=='/' || stack[top]=='*') 
{ 
spre=2; 
} 
else if (stack[top]=='+' || stack[top]=='-') 
{ 
spre=1; 
} 
} 
void check_pre() 
{ 
if (top==-1 || stack[top]==')') 
{ 
push(); 
} 
else if (epre<spre) 
{ 
//cout<<"Presidence pop \n"; 
pop(); 
pop(); 
push_nospace(); 
} 
//else if (epre==spre) 
//{ 
//cout<<"Presidence pop \n"; 
//pop(); 
//push_nospace(); 
//} 
else  
{ 
push(); 
} 
} 
int main() 
{ 
cout<<"Enter the expression: "; 
cin.getline(exp,90); 
n=strlen(exp);
for (i=n-1,j=0;i>=0,j<n;j++,i--) {
	exp1[j]=exp[i];
}
for (i=0;i<n;i++) {
	exp[i]=exp1[i];
}
for (i=0;i<n;i++) 
{
if (exp[i]==')') 
{ 
push(); 
} 
else if (exp[i]=='(') 
{ 
popall(); 
} 
else  if (exp[i]=='*' || exp[i]=='/') 
{ 
push(); 
} 
else if (exp[i]=='+' || exp[i]=='-') 
{ 
if (top>=0) 
{ 
    sprecedence(); 
} 
else 
{ 
spre=0; 
} 
eprecedence(); 
check_pre(); 
} 
else  
{ 
ans+=exp[i]; 
} 
} 
popallstack(); 
cout<<"\n Prefix expression is:";
int n=ans.size();
for (i=n-1;i>=0;i--){
	cout<<ans[i];
} 
return 0; 
}
