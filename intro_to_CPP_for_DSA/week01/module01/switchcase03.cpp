#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int md=a%2;

    switch (md)
    {
        case 0:
            cout<<"Even";
            break;
        default:
            cout<<"Odd";
    }

    return 0;
}