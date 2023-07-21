#include<bits/stdc++.h>
using namespace std;

int main()
{

    // map is key-value pair,
    // Doesn't follow order,
    // follow hashing..


    map<string, int>mp;
    // insert in map type 1
    // mp.insert({"Sakib Al Hasan", 75});
    // mp.insert({"Tamim", 19});
    // mp.insert({"Shamim", 79});

    // type 2
    mp["Sakib al Hasan"] = 75; // O(logN)
    mp["Tamim"] = 19;
    mp["Shamim"] = 79;
    mp["akib"]=100;
    // Show all

    for (auto it=mp.begin();it!= mp.end() ; it++)
    {
        cout<<it->first<<" "<< it->second<<endl;//O(logN)
    }

    // cout<<mp["Sshamim"]<<endl;

    // ase ki na dekhte

    if(mp.count("akib"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }
    
    return 0;
}