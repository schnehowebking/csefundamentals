#include<bits/stdc++.h>
using namespace std;

int main()
{
    // // erase one elements
    // vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+2);

    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    //// erase multi elements
    vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+1, v.begin()+4);
    v.erase(v.begin()+1, v.end()-1);

    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}