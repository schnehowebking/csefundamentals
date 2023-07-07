#include<bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.

    stack<int>newStack;

    while(!myStack.empty())
    {
        newStack.push(myStack.top());
        myStack.pop();
    }
    newStack.push(x);
    while(!newStack.empty())
    {
        myStack.push(newStack.top());
        newStack.pop();
    }
    return myStack;
}

int main()
{
    
    return 0;
}