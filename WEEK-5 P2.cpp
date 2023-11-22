#include<iostream>
using namespace std;
int main()  
{  
    char exp[50];
    int x=0, i=0; 
    printf("\nEnter an expression: ");  
    cin.getline(exp,40);      
 while(exp[i]!= '\0')  
    {     
     if(exp[i]=='('|| exp[i]=='{' || exp[i]=='[')  
        {  
            x++;     
        }    
     else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')  
        {  
            x--;   
            if(x<0)  
            break;  
        }  
    i++;      
    }  
    if(x==0)  
    {  
        cout<<"Expression is balanced !!";  
    }    
    else  
    {  
        cout<<"Expression is unbalanced !!";  
    }  
    return 0;  
}  
