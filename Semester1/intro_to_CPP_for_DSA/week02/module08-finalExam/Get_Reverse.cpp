#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string s[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }
    for (int i = n-1; i >=0; i--)
    {
        cout<<s[i]<<endl;
    }

    return 0;
}