#include<iostream>
 using namespace std; 
 int main(){

int n, i, arr[100], j, temp; 
cout<<"Enter Size: "<<endl; 
cin>>n; 
cout<<"Enter Elements: "<<endl; 
for(i=0; i<n; i++){

cin>>arr[i];
}
for(i=0; i<(n-1); i++){

for(j=0;j<(n-i-1); j++){

if(arr[i]>arr[j+1]){

temp = arr[j]; 
arr[j] = arr[j+1]; 
arr[j+1] = temp;
}
}
}
cout<<"SortedArray: "<<endl;
for(i=0; i<n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}