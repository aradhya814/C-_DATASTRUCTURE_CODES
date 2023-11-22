#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPalindrome(string s)
{
    int l= s.size();
    stack<char> st;
    int i;
    for (i = 0; i <l/2; i++) {
        st.push(s[i]);
    }
    if (l%2!=0) {
        i++;
    }
    char ele;
    while (s[i] != '\0')
    {
         ele = st.top();
         st.pop();
    if (ele != s[i])
        return false;
        i++;
    }
return true;
}
int main()
{
	string s[50];
	cout<<"ENTER THE STRING: ";
	cin.getline(s,30);
    if (isPalindrome(s)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
