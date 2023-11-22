#include <bits/stdc++.h> 
using namespace std;
void LinearSearch(int arr[], int n, int num){
bool flag = true; 
for (int i = 0; i < n; i++){
if (arr[i] == num){

cout << "\nElement " << num << " is present at Index: " << i <<endl;
flag = true;
break;
}
else

flag = false;
}
if (flag = false)

cout << "\nElement" << num << " is not present" << endl;
}
void printArray(int arr[], int n){
for (int i=0; i < n; i++){
cout << arr[i] << " ";
}
}
int main()
{
int n,num;
cout << "Enter Size: ";
cin >> n;
int arr[n];

cout<<"Enter Elements: " << endl;

for (int i = 0; i < n; i++){

cin>> arr[i];
}
cout << "Enter SearchElement: ";
cin >> num;
cout << "Array: " << endl;
printArray(arr, n);

LinearSearch(arr, n, num);

return 0;
}