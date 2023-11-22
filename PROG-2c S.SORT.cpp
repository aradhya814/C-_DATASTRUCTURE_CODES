#include<iostream> 
using namespace std; 
int main()
{
int s,arr[100],i,j,temp,small,c,index; 
cout<<"Enter Size: "<<endl;
cin>>s;
cout<<"Enter Elements: "<<endl;
for(i=0; i<s; i++)
{
cin>>arr[i];
}
for(i=0; i<(s-1); i++)
{
c=0;
small = arr[i];
for(j=(i+1);j<s;j++)
{
if(small>arr[j])
{
small = arr[j];
c++;
index = j;
}
}
if(c!=0)
{
temp = arr[i];
arr[i] = small;
arr[index] = temp;
}
}
cout<<"SortedArray: "<<endl; 
for(i=0; i<s; i++){
cout<<arr[i]<<" "; 
}
cout<<endl;
return 0;
}