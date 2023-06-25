#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool inside_w =false;
    int count = 0;

    for(char c:s)
    {
        if(isalpha(c))
        {
            if(inside_w==false)
            {
                count++;
            }
            inside_w=true;
        }
        else
        {
            inside_w=false;
        }
    }
    cout<<count<<endl;

    return 0;
}