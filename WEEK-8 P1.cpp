#include <iostream>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
void deleteFirstNode(struct Node* head)
{
	cout<<"head-next"<<head->next;
   struct Node* tempNode = head->next;
   cout<<"\n head-next-next"<<head->next->next;
   head->next = head->next->next;
   delete tempNode;
}
void removeLastNode(struct Node* head)
{
   if (head->next == NULL) {
      delete head;
   }
Node* second_last = head;
while (second_last->next->next != NULL)
{second_last = second_last->next;}
delete (second_last->next);
second_last->next = NULL;
}
void push(struct Node** head, int node_data)
{
   struct Node* newNode = new Node;
   newNode->data = node_data;
   newNode->next = (*head);
   (*head) = newNode;
}
void insertAfter(struct Node* prev_node, int node_data)
{
if (prev_node == NULL)
{
   cout<<"Null"; return; }
   struct Node* newNode =new Node;
   newNode->data = node_data;
   newNode->next = prev_node->next;
    prev_node->next = newNode;
}
void displayList(struct Node *node)
{
   while (node != NULL)
   {
      cout<<node->data<<"-->";
      node = node->next;
   }

if(node== NULL)
cout<<"null";
}
void delete_node(struct Node* head,int n){
struct Node* tempNode=head;
while (n!=1){
    tempNode=tempNode->next;
    n--;
}
struct Node* temp=tempNode->next;
tempNode->next=tempNode->next->next;
delete temp;
}
int main()
{
struct Node* head = NULL;
cout<<"Enter \n 1. Insert at first position. \n 2. Insert at nth node \n 3. Delete last node \n 4. Delete first node \n 5. Delete nth element \n 6. Display \n 0. Exit loop.";
int flag=1,d;
while (flag !=0){
    cout<<"\n Enter flag:";
    cin>>flag;
if (flag==1)
    {
        cout<<"Enter Data:";
        cin>>d;
        push (&head,d);
    }
else if (flag==2)
    {
        int pos;
        cout<<"Enter Data and position:";
        cin>>d;
        cin>>pos;
        struct Node* t=head;
        for (int i=0;i<pos-2;i++){
            t=t->next;
        }
        insertAfter(t,d);}
else if (flag==4)
    {
        deleteFirstNode(head);
    }
else if (flag==3)
    {
        removeLastNode(head);
    }
else if (flag==5)
    {
        int pos;
        cin>>pos;
        delete_node(head,pos);
    }
else if (flag==6)
    {
        displayList(head);
    }
}
return 0;
}
