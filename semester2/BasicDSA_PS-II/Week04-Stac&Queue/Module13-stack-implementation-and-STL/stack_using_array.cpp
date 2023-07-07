#include<bits/stdc++.h>
using namespace std;
class myStack
{
    private:
        vector<int> v;
    public:
        void push(int val)
        {
            v.push_back(val);
        }

        void pop()
        {
            v.pop_back();
        }

        int top()
        {
            return v.back();
        }

        int size()
        {
            return v.size();
        }
        bool empty()
        {
            if(v.size()==0) return true;
            else return false;
        }
};

int main()
{
    // stack =  Last In First Out (LIFO system)...
    // stack is an ADT- Abstract Data Structure or Higher level data stracture....

    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }



    return 0;
}