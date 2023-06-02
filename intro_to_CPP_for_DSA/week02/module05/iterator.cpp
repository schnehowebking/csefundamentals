#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //     Iterators
    // begin() -> pointer to the first element.
    //end() -> pointer to the next element after the last element of the string.

    //method 1... old method

    string ss;
    string::iterator it;
    cin>>ss;

    for (it=ss.begin();it<ss.end();it++)
    {
        cout<<*it<<endl;
    }


    //method 2... new method

    string ss;
    cin>>ss;

    for (auto it=ss.begin();it<ss.end();it++)
    {
        cout<<*it<<endl;
    }
    


    return 0;
}