#include<iostream> 
using namespace std; 
int main()
{
int arr[100], s, i, j, k, e, index; 
cout<<"Enter Size: "<<endl; 
cin>>s; 
cout<<"Enter Elements: "<<endl;
for(i=0; i<s; i++){
cin>>arr[i];
}
for(i=1; i<s; i++)
{
e = arr[i];
if(e<arr[i-1])
{
for(j=0; j<=i; j++)

{

if(e<arr[j])
{
index=j;
for(k=i; k>j; k--){
arr[k] = arr[k-1];
}
break;
}
}
}
else{
	continue;
}
arr[index]=e;
}
cout<<"SortedArray: "<<endl;
for(i=0;i<s;i++){
	cout<<arr[i]<<" ";
	}
return 0;
}

