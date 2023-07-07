#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here

    list<string>myList;
    string s;

    while (true)
    {
        cin>>s;
        if(s=="end") break;
        myList.push_back(s);
        
    }

    int n;
    string sq;
    string adrs;
    auto cur_it = myList.begin();

    for (int i = 1; i <=n; i++)
    {
        cin>>sq;
        if(sq=="visit")
        {
            cin>>adrs;
            auto it = find(myList.begin(), myList.end(), adrs);
            if (it != myList.end())
            {
                cur_it = it;
                cout << *cur_it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
            

        }
        else if(sq =="prev")
        {
            if (cur_it != myList.begin())
            {
                cout << *cur_it << endl;
                cur_it--;
                
            }
            else
            {
                cout << "Not Available" << endl;
            }

        }
        else if (sq == "next")
        {
            if (next(cur_it) != myList.end())
            {
                cout << *cur_it << endl;
                cur_it++;
                
            }
            else
            {
                cout << "Not Available" << endl;
            }

        }
    }
    



    return 0;
}
