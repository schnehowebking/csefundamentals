#include<bits/stdc++.h>
using namespace std;


class myQueue
{
    private:
    list<int>l;
    public: 
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }


    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }

};

int main()
{
    // queue = ticket counter line or First In First Out(FIFO)..

    myQueue q;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }


    // this will use when you want to use  pop() or front() after loop;
    // if(!q.empty())
    // {
    //     cout<<q.front()<<endl;

    // }
    
    return 0;
}