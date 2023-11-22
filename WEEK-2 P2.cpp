#include <iostream>
using namespace std;
int main(){
    int m,n ,i,j;
    cout<<"Enter the order of matrix m and n: ";
    cin>>m>>n;
    
    cout<<" Please enter matrix elements: \n";
        int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i>j)
            a[i][j]=0;
            else
            cin>>a[i][j];
        }
    }
    cout<<"\n The Upper Triangular Matrix is: \n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
int arr[20];
int k=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(a[i][j]!=0)
{
arr[k]=a[i][j];
k++;
}
}
}
//Displaying 1D Array
cout<<"\nThe 1D Array is : ";
for(int p=0;p<k;p++)
cout<<arr[p]<<" ";
}
    
