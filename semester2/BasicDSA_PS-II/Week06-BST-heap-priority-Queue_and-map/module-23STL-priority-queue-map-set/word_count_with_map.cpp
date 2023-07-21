#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentense;
    getline(cin, sentense);
    string word;
    stringstream ss(sentense);
    map<string, int, greater<string>>mp;
    while(ss>>word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp["I"]<<endl;
    
    return 0;
}