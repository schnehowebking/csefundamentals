#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList= {5,2,10,30,50,2,7,9,10};

    myList.remove(10);
    myList.sort(); // ssoto theke boro
    myList.sort(greater<int>()); // boro theke soto

    myList.sort();
    myList.sort(greater<int>());
    myList.unique();
    myList.reverse();

    for(int val: myList)
    {
        cout<<val<<endl;
    }



    return 0;
}