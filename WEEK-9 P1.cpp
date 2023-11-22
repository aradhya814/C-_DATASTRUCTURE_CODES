#include <iostream> 
#include <bits/stdc++.h> 
using namespace std;

class Node

{

public:

int data;

Node *next;

Node *prev;

};

class DoublyLinkedList{

private:

Node *head, *tail;

public:

// constructor
DoublyLinkedList()
{

head = NULL;

tail = NULL;
}
// To Insert Element at rear end of the list

void Insert_End(int Ele){

Node *temp = new Node;

temp->data = Ele;

temp->next = NULL;

// if dll empty

if (head == NULL){

temp->prev = NULL;

head = temp;

}

else

{

// if list not empty toh new Element ko tail bana,

// then that tail ke next to temp, then new tail = temp
temp->prev=tail; 
tail->next = temp;

}
tail = temp;
}
void Delete_End(){
Node *temp = new Node;
temp = tail;

if (temp->prev == NULL){

head = tail = NULL;

delete temp;

return;
}

// make the second last Element point to null before deleting

temp->prev->next = NULL;

tail = temp->prev; // Make tail as the 2nd last Element

delete temp;

// delete last Element

return;
}

void Insert_Pos(int Ele, int Loc){

// We'll need two nodes, one for traversal to reach the position, and one for that actual new element

Node *temp = new Node;
Node *temp2=new Node; 
Node *trav;
trav=head;

temp->data = Ele;

if (Loc == 0){

temp->next = head;
head = temp;
return;
}

int count = 0; // counter to check when we reach Location

// If list is empty.

if (trav==NULL){
Insert_End(Ele);
}
while (trav != NULL)
{

if (count == Loc){
break;
}
count++;
trav = trav->next; // move on to next node
}

for (int i=0; i<Loc-2; i++){
if(temp2==NULL)
{
Insert_End(Ele);
break;
}
temp2 = temp2->next;
}
// now trav will be at Location where we have to insert, so well have to insert temp before trav 
trav->prev->next = temp; 
temp->prev = trav->prev; 
temp->next = trav; 
trav->prev = temp;
}

void Delete_Pos(int Loc){

// To delete from an index we'll only need a traversing node

Node *trav;
trav = head;
if (Loc == 0){

head = trav->next;
delete trav; 
return;
}
if (trav== NULL){
	Delete_End();
}
int count=0;
while(trav!=NULL){
	if(count==Loc){
		break;
	}
	count++;
    trav=trav->next;
}
trav->prev->next=trav->next;
trav->next->prev=trav->prev;
}

void Insert_After(int Ele, int val){
	
Node *temp = new Node;
Node *trav = new Node; 
temp->data = Ele;
trav= head;
bool found = false; // boolean for searching the Element

// if list not empty

while (trav!= NULL){

if (val == trav->data) // if we find the Element
{

found = true;

// checking if the Element is not last Element

if (trav->next = NULL){

trav->next->prev = temp;
}
else{
tail = temp;

temp->next = trav->next;

trav->next = temp;

temp->prev = trav;

break;
}
}
trav=trav->next;
}
if (!found)
{
cout << "Element not found" << endl;
}
}

void Insert_Before(int Ele, int val)
{
Node *temp = new Node;
Node *trav= new Node;
temp->data = Ele;
trav=tail;
bool found = false;
while (trav!= NULL)
{
if (val ==trav->data)
{
found = true;
if (trav->prev != NULL){

trav->prev->next = temp;
}
else{
head = temp;
}
temp->prev = trav->prev;

trav->prev = temp;
temp->next=trav;
break;
}
trav=trav->prev;
}
if(!found){
	cout<<"ELEMENT NOT FOUND";
	
}
}
void Display()
{
Node *trav = new Node;
trav = head;
while (trav!= NULL)
{
cout << trav->data<<" ";
trav=trav->next;
}
cout << endl;
}
};

int main()
{
DoublyLinkedList D;
int Choose;
int data;
int Loc, Ele;
cout<<"1. Insert an Element at the rear end of the list" << endl;

cout<<"2. Delete an Element from the rear end of the list" << endl;

cout << "3. Insert an Element at a given index of the list" << endl; 

cout << "4. Delete a given from given index from the list" << endl;

cout << "5. Insert an Element after another Element " << endl;

cout << "6. Insert an Element before another Element" << endl;

cout << "7. Print the list" << endl;

cout << "8. Exit" << endl;
while (1)
{

cout << "\nEnter a choice: ";
cin >> Choose;
switch (Choose)
{
case 1:

cout<<"Enter the Element to insert at end:";
cin >> Ele;
D.Insert_End(Ele);
break;

case 2:
D.Delete_End();
break;

case 3:
cout<<"Enter the index of the Element to be inserted:";
cin >> Loc;
cout<<"Enter the Element to insert:";
cin >> Ele;
D.Insert_Pos(Ele, Loc);
break;

case 4:
cout<<"Enter the index of the Element to be deleted: ";
cin >> Loc;
D.Delete_Pos(Loc);
break;

case 5:
cout<<"Enter the Element after which insertion is to be done";
cin>> Loc;
cout << "Enter the Element to insert:";
cin>> Ele;
D.Insert_After(Ele, Loc);
break;

case 6:
cout << "Enter the Element before which insertion is to be done";
cin >> Loc;
cout << "Enter the Element to insert:";
cin >> Ele;
D.Insert_Before(Ele, Loc);
break;

case 7:
D.Display();
break;

case 8:
exit(0);

default:
cout << "Invalid Choice!" << endl;
break;
}
}
}
