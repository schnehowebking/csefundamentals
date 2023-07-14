#include <bits/stdc++.h>
using namespace std;

bool isSame(stack<int> st, queue<int> q)
{
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) return false;
        st.pop();
        q.pop();
    }

    if (!st.empty() || !q.empty()) return false;
    return true;

}


int main()
{
    // Write your code here

    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue <int> q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (isSame(st, q))cout<<"YES" <<endl;
    else cout<<"NO"<<endl;

    return 0;

}
