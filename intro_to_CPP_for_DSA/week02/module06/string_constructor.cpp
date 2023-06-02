#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";
    // 1

    string s2("Hello World 2");

    // 2

    string s3("Hello World 3", 4);

    // 3

    string a="Hello World 4";
    string s4(a,6);

    // 4
    string s5(26, 'A');

    cout<<s<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    
    return 0;
}