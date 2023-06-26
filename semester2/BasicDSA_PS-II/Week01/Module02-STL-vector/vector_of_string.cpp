#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    for(string val: v)
    {
        cout<<val<<" ";
    }
    
    
    return 0;
}