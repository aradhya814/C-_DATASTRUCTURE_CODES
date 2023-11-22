#include<iostream>
using namespace std; 
struct Node {
	
int Data;
struct Node* right;
int Rcount;
int Lcount;
struct Node* left;
};

bool isPBT(int count){

count = count + 1;
while (count % 2 == 0){
count = count / 2;
}
if (count == 1)
return true;
else
return false;
}

int LeafCount(struct Node* node)
{
if(node == NULL)
return 0;
if(node->left == NULL && node->right== NULL)
return 1;
else
return LeafCount(node->left)+ LeafCount(node->right);
}
struct Node* newNode(int Data)
{
struct Node* temp = new Node();
temp->Data = Data;
temp->right = NULL;
temp->left= NULL;
temp->Rcount = 0; 
temp->Lcount = 0;
}
struct Node* insert(struct Node* root,int Data)
{
if (root == NULL) {
struct Node* n = newNode(Data); 
return n;
}
if (root->Rcount == root->Lcount) { 
root->left= insert(root->left, Data); 
root->Lcount += 1;
}
else if (root->Rcount < root->Lcount) {
if (isPBT(root->Lcount)) {
 root->right= insert(root->right, Data); 
 root->Rcount += 1;
}
else {
root->left = insert(root->left, Data);
root->Lcount += 1;
}
}
return root;
}
void InOrder(struct Node* root){
	if (root != NULL) { 
	InOrder(root->left);
    cout << root->Data << " "; 
	InOrder(root->right);
}
}
void PreOrder(struct Node* root)
{
if (root != NULL) {
cout << root->Data << " ";
PreOrder(root->left);
PreOrder(root->right);
}
}
void PostOrder(struct Node* root)
{
if (root != NULL) {
cout << root->Data << " ";
PostOrder(root->left);
PostOrder(root->right);

}
}

int main()
{
int size;
struct Node* root = NULL;
cout << "Enter Size:" << endl;
cin >> size;
int arr[size];
cout << "Enter Elements:" << endl;
for(int i = 0; i<size; i++)
cin >> arr[i];
for(int i = 0; i < size; i++)
root = insert(root, arr[i]);
cout<<"1. InOrder traversal" << endl;
cout<<"2. PreOrder traversal" <<endl;
cout<<"3. PostOrder traversal"<<endl;
cout<<"4. No. of Leaf Nodes " <<endl;
cout<<"5. Terminate"<<endl;
int c;
while(1){
	cout<<"\n" << "Enter choice:" << endl;
cin >> c;
switch(c)
{
case 1:
InOrder(root);
break;
case 2:
PreOrder(root);
break;
case 3:
PostOrder(root);
break;
case 4:
cout << LeafCount(root);
break;
case 5:
cout<<"Exited" <<endl;
break;
default:
cout<<"Error!! \n Invalid Choice" << endl;
break;
}
}
return 0;
}
