#include<iostream>
using namespace std;
int stack[100],x,top=-1;
void push(int a){
	if(top>=x-1){
		cout<<"STACK OVERFLOW!!";
	}
	else{
		top++;
		stack[top]=a;
	}
}
void pop(){
	if(top<=-1){
		cout<<"STACK UNDERFLOW!!";
	}
	else{
		cout<<"ELEMENT POPPED IS: "<<stack[top];
		top--;
	}
}
void display(){
   if(top>=0) {
      cout<<"STACK ELEMENTS ARE:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
   } else
   cout<<"STACK IS EMPTY";
}
int main(){
	cout<<"ENTER THE SIZE OF ARRAY: ";
	cin>>x;
   int ch, val;
   cout<<"1) Push in stack\n";
   cout<<"2) Pop from stack\n";
   cout<<"3) Display stack\n";
   cout<<"4) Exit\n";
   cout<<"\n";
   do {
      cout<<"\nENTER CHOICE NUMBER: \n";
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"ENTER VALUE TO BE PUSHED: ";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            cout<<"\n";
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit";
            break;
         }
         default: {
            cout<<"ENTER VALID CHOICE NUMBER !!";
         }
      }
   }while(ch!=4);
   return 0;
}
