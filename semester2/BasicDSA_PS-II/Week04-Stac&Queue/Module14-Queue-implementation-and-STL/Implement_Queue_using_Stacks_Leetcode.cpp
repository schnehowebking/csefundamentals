#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int>st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newSt;
        int lastval;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                lastval = k;
                break;
            }
            newSt.push(k);
        }

        while(!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        
        return lastval;
    }
    
    int peek() {

        stack<int> newSt;
        int lastval;
        while(!st.empty())
        {
            int k = st.top();
            st.pop();
            if(st.empty())
            {
                lastval = k;
            }
            newSt.push(k);
        }

        while(!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        
        return lastval;
        
    }
    
    bool empty() {

        return st.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{
    
    return 0;
}