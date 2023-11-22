#include<iostream>
#include<cstdlib>
#include<malloc.h>
using namespace std;
struct node{

    int info;

    struct node *next;

};
class stack{

    struct node *top;

    public:

        stack();

        void push();

        void pop();

        void display();
};
stack::stack(){
    top = NULL;

}
void stack::push(){
    int data;
    struct node *p;
    if((p=(node*)malloc(sizeof(node)))==NULL){
        cout<<"Memory Exhausted";
        exit(0);
    }
    cout<<"Enter a Number to insert:";
    cin>>data;
    p = new node;
    p->info = data;
    p->next = NULL;
    if(top!=NULL){
        p->next = top;
    }
    top = p;
    cout<<"\nNew item inserted";
}


void stack::pop(){
    struct node *temp;
    if(top==NULL){
        cout<<"\nThe stack is Empty";
    }else{
        temp = top;
        top = top->next;
        cout<<"\nThe value popped is "<<temp->info;
        delete temp;
    }
}
void stack::display(){

    struct node *p = top;

    if(top==NULL){

        cout<<"\nNothing to Display\n";

    }else{

        cout<<"\nThe contents of Stack\n";

        while(p!=NULL){

            cout<<p->info;
            p = p->next;
        }
    }
}
int main(){
    stack s;
    int choice;
    do{

        cout<<"\nEnter your choice:";

        cout<<"\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n";
        cin>>choice;
        switch(choice){
            case 1:
                s.push();
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Invalid Choice";
                break;
        }
    }while(choice);
    return 0;
}
