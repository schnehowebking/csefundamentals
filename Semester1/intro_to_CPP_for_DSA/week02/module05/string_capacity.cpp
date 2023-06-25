#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s= "Hello World";
    cout<<s.size()<<endl<<s.capacity()<<endl<<s.max_size()<<endl<<s.length()<<endl;
    //clear strings
    s.clear();

    cout<<s.size()<<endl;

    if (s.empty()==true)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not Empty"<<endl;
    }

    // resize
    s.resize(10,'X');
    cout<<s<<endl;
    

    
    return 0;
}