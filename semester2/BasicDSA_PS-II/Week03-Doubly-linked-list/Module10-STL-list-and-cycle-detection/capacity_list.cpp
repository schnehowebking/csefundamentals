#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList= {10,20,30,40,50};


    // myList.size();

    cout<<myList.size()<<endl;
    

    // myList.max_size()

    cout<<myList.max_size()<<endl;

    // myList.clear()

    myList.clear();

    cout<<myList.size()<<endl;

  

    // // myList.empty()
    if(myList.empty())
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        for(int val:myList)
        {
            cout<<val<<" ";
        }

    }

    // // myList.resize()

    myList.resize(2);
    myList.resize(5, 100);

    for(int val:myList)
    {
        cout<<val<<endl;
    }



    return 0;
}