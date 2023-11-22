#include <iostream>
using namespace std;
int stack[10],size,i,top=-1,rear=0,choice;
void push()
{
		top=(top+1)%size;
		cin>>stack[top];
}
void pop()
{
	if (top==-1)
	{
		cout<<"Queue Underflow";
	}
	else
	{
		cout<<"Popped element is:"<<stack[rear];
		rear=(rear+1)%size;
	}
}
void display ()
{
	if (top==-1)
	{
		cout<<"The Queue is empty";
	}
	else
	{
		for (i=rear;i<=top;i++)
	    {  
		    cout<<stack[i]<<"\n";
	    }
	}
}
int main ()
{
	cout<<"Enter the size of queue:";
	cin>>size;
	do
	{
		cout<<"\n PLEASE ENTER THE CHOICE NUMBER:\n0.EXIT,\n1.PUSH,\n2.POP,\n3.SHOW QUEUE\n:";
		cin>>choice;
		if (choice==1)
		{
			push();
		}
		else if (choice==2)
		{
			pop();
		}
		else if (choice==3)
		{
			display();
		}
	}while(choice!=0);
	return 0;
}
