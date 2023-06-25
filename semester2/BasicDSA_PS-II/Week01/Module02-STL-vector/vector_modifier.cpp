#include<bits/stdc++.h>
using namespace std;

int main()
{
    // // v = or v.assign(); 

    vector<int> x={10,20,30,40};
    vector<int> v={1,2,3};

    v=x;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // // v.push_back()

    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // // v.pop_back()

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}