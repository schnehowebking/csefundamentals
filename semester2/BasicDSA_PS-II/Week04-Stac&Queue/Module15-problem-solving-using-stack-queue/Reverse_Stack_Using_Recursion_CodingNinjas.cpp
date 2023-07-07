#include<bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &s) {
    // Write your code here
    if(s.empty()) return;

    int x = s.top();
    s.pop();
    reverseStack(s);


    stack<int>cp;

    while(!s.empty())
    {
        cp.push(s.top());
        s.pop();
    }

    cp.push(x);

    while(!cp.empty())
    {
        s.push(cp.top());
        cp.pop();

    }  


}

int main()
{
    
    return 0;
}