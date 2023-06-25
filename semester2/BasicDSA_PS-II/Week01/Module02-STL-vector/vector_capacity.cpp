#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;


    // // 1. v.size()- complx- O(1)
    // cout<<v.size();

    // // 2. v.max_size()-complx- O(1)
    // cout<<v.max_size();

    // // 3. v.capacity()-complx- O(1) - if go out of capacity it will automatically increas it capacity to duble means 
    cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    // // 4. v.clear()-complx- O(N)- it clear size but don't delete memory.
    v.clear();
    // v.size();
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<v[4]<<endl;

    // // 5. v.empty()-complx- O(1)- its check if size is 0 or not and return true or false

    if(v.empty())
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }


    // // 6. v.resize()-complx- O(K)where K is the difference between new size and current size. 

    v.resize(5, 100);
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}