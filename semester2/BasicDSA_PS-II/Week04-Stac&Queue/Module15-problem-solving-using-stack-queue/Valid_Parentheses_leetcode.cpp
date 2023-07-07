#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s)
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(c==')' && st.top()=='(')
                    {
                        st.pop();
                    }
                    else if(c=='}' && st.top()=='{')
                    {
                        st.pop();
                    }
                    else if(c==']' && st.top()=='[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();

        
    }
};

int main()
{
    // //  1. end brack
    //         ->empty() -> invalid
    //         ->top() -> didn't match->n
    // //  2. empty()-> valid...
    return 0;
}