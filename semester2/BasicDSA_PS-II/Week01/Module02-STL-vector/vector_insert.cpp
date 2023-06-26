#include<bits/stdc++.h>
using namespace std;

int main()
{
    // // insert value
    vector<int> v={1,2,3,4,5};
    v.insert(v.begin()+2,10); //v.insert()
    for (int s:v)
    {
        cout<<s<<endl;
    }

    // // insert vector 
    vector<int> v={1,2,3,4,5};
    vector<int> v2={101,102,103,104,105};
    v.insert(v.begin()+2,v2.begin(), v2.end()); //v.insert()
    for (int s:v)
    {
        cout<<s<<" ";
    }
    
    return 0;
}