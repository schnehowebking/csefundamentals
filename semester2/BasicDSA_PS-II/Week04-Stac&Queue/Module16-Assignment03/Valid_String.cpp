#include <bits/stdc++.h>

using namespace std;


bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() != c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}



int main()
{
    // Write your code here

    int n;
    cin>>n;
    
    while (n--) {
        string s;
        cin >> s;
        if(isValid(s))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
