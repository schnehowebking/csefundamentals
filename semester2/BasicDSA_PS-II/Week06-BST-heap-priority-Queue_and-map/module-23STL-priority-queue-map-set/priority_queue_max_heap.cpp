#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            pq.push(x); //O(logN)
        }
        else if(c==1)
        {
            pq.pop(); //O(LogN)
        }
        else if ( c==2)
        {
            cout<<pq.top()<<endl;
        }
        else
        {
            break;
        }
    }
    
    return 0;
}