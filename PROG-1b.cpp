#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
int mid, low, high;
cout << "Enter Size: ";
cin>> n;
int arr[n];
cout << "Enter SortedArray:";
for (int i=0; i<n;i++){

cin>> arr[i];
}

int key;
cout << "Enter SearchElement: ";
cin>> key;
low = 0; 
high = n -1;
do
{
mid = (low + high)/2;
if (key < arr[mid]){ // key in left half of sorted, so make new high as mid-1
high = mid-1;
}
else if (key> arr[mid]){

low=mid + 1; // key in right half so make new low as mid+1 } while (key != arr[mid] && low <= high);
}
}
while(key!=arr[mid]&&low<=high);
if (key = arr[mid]){

cout << "Element is present at Index: " << mid << endl;
}

else{
cout << "Element is not present\n";
}
return 0;
}