#include<bits/stdc++.h>
using namespace std;

int main()
{
  
    list<int> myList = {10,20,30,40,50,60,70,80, 10, 10, 50, 20, 10};
    list<int> newList= {100,200,300};
    // type 01
    newList = myList;
    // type 02
    newList.assign(myList.begin(), myList.end());
    // type 03
    
    myList.push_back(100);
    myList.push_front(100);
    myList.pop_back();
    myList.pop_front();
    myList.pop_front();
    myList.insert(next(myList.begin(),1),100);
    myList.insert(next(myList.begin(),2),{100,200,300});
    myList.insert(next(myList.begin(),3),newList.begin(), newList.end());

    myList.erase(next(myList.begin(),2));
    myList.erase(next(myList.begin(),2), next(myList.begin(),5));


    replace(myList.begin(), myList.end(), 0, 100);

    auto it = find(myList.begin(), myList.end(), 200);

    if(it == myList.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }




    for(int val : myList)
    {
        cout<<val<<endl;
    }
    return 0;
}