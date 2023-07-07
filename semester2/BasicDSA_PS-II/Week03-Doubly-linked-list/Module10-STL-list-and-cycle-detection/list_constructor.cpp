#include<bits/stdc++.h>
using namespace std;

int main()
{
    // method 1
    // list<int> mylist;
    // cout<<mylist.size()<<endl;


    // method 2

    // list<int>mylist(10,5);
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<" ";
            
    // }

    // //  method 3 (list)

    // list<int> mylist2 = {1,2,3,4,5};
    // list <int > mylist(mylist2);

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<" ";
            
    // }


    //  method 4 (array)

    // int a[5] = {10,20,30,40,50};
    // list <int > mylist(a, a+5);

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<" ";
            
    // }
    
    //  method 5 (vector)

    vector<int> v = {1,2,3,40,5};
    list <int > mylist(v.begin(), v.end());

    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<" ";
            
    // }

    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    


    return 0;
}