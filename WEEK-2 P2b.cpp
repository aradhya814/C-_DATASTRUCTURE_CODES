#include <iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the order of the matrix : ";
cin>>n;
int mat[n][n];
//Reading the matrix
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(j<=i)
{
cout<<"Enter Matrix Element["<<i<<"]["<<j<<"] : ";
cin>>mat[i][j];
}
else mat[i][j]=0; 
}
}
//Displaying the matrix
cout<<"\nThe Matrix is : \n";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<mat[i][j]<<" ";
}
cout<<"\n";
}
//Putting in the 1D Array
int arr[20];
int k=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(mat[i][j]!=0)
{
arr[k]=mat[i][j];
k++;
}
}
}
//Displaying 1D Array
cout<<"\nThe 1D Array is : ";
for(int p=0;p<k;p++)
cout<<arr[p]<<" ";
//Taking the element position
int r,c;
cout<<"\nInput the ROW and COLOUMN : ";
cin>>r;
cin>>c;
if(c<=r && r<n && c<n) cout<<"The Element is : "<<arr[r*(r+1)/2 + c]<<"at array position "<<r*(r+1)/2 + c;
else cout<<"ERROR IN ROW OR COLOUMN";
return 0;
}
