#include<iostream>
using namespace std;
struct node
{ 
int val; 
node *left; 
node *right; 
};
node* getNewNode(int x){ 
node *temp = new node; 
temp->val = x; 
temp->left = NULL;
temp->right=NULL; 
return temp;

}
node* rootNode = NULL;
node* insert(node* root, int x){
if(root == NULL){
node *temp =getNewNode(x);
return temp;
}
cout << "Current Value: " << root->val << endl;
cout << "Insert Left or Right" << endl;
char ch;
cin >> ch;
if(ch=='L' || ch == ' ')
root->left=insert(root->left, x);
else if(ch ='R' || ch =='r')
root->right= insert(root->right, x);
else
cout<<"INVALID!" << endl;
}
void printParent(node* root, int find, int parent){
if(root == NULL){
return;
}
if(root->val == find){
cout << "Parent is: " << parent << endl; 
return;
}
printParent(root->left, find, root->val); 
printParent(root->right, find, root->val);
}
bool printAncestors(node* root, int find){ 
if(root == rootNode && find == root->val){ 
cout<<"Root Node has No Ancestors " << endl;
}
if(root->val = find){
return true;
}
if(root->left == NULL && root->right == NULL){
return false;
}
if(root->left!= NULL){
bool flag = printAncestors (root->left, find);
if(flag){
cout << root->val << " ";
return true;
} 
}
if(root->right != NULL){
bool flag = printAncestors (root->right, find);
if(flag){
cout << root->val << " ";
return true;
}
}
}
int getDepth(node* root){
if(root->left == NULL && root->right == NULL){
return 1;
}
if(root->left== NULL){
return 1+ getDepth(root->right);
}
if(root->right == NULL){
return 1 + getDepth(root->left);
}
return 1+ max(getDepth(root->left),getDepth(root->right));
}
int depthOfTree(node* root){
return getDepth(root) - 1;
}

int main(){
cout<<"I Insert" << endl;
cout<<"D Depth of Tree" << endl;
cout<<"P Parent" << endl;
cout<<"A Ancestors" << endl;
cout << "T Terminate" << endl;
cout << "Input Choice: ";
char ch;
cin >> ch;
while(ch!= 'T' || ch != 't'){
if(ch=' '|| ch ==' '){
cout<<"Input Number: ";
int x;
cin >> x;
if(rootNode == NULL){
rootNode = insert(rootNode, x);
}
else
insert(rootNode, x);
}
else if(ch == 'D' || ch==' '){
depthOfTree(rootNode);
cout<<endl;
}
else if(ch == 'P' || ch=='p'){
cout<< "Input Element: ";
int x; cin>> x;
printParent(rootNode, x, -9999);
} else if(ch == 'A' || ch=='a'){
cout << "Input Element: ";
int x; cin>> x; printAncestors(rootNode, x);
}
else{
return 0;
}
cout << "Input Choice: ";
cin >> ch;
}
}