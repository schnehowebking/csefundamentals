#include<bits/stdc++.h>
using namespace std;

int main()
{
    // add/append string system 1

    string a ="HEllo";
    string b ="GEllo";

    a+=b;
    cout<<a<<endl;


    // add/append string system 2

    string c ="HEllo";
    string d ="GEllo";

    c.append(d);
    cout<<c<<endl;

    // push_back() -> add character to the last of the string.
    a.push_back('A');
    cout<<a<<endl;

    // pop_back() -> remove the last character of the string.
    for (int i = 1; i<=3; i++)
    {
        a.pop_back();
    }
    
    cout<<a<<endl;

    // assign() -> assign string.

    // erase() -> erase characters from the string.
    c.erase(4,4);
    cout<<"After Erase C="<<c<<endl;

    // replace() -> replace a portion of the string.

    c.replace(2,2, "SO");
    cout<<"After replace C="<<c<<endl;
    a.replace(5,0, "SO");
    cout<<"After replace a="<<a<<endl;

    // insert() -> insert a portion to a specific position.

    string ss="HelloWorld";
    ss.insert(4, "Schneho");
    cout<<ss<<endl;


    return 0;
}