#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string fixedword = "Ratul";
    stringstream ss(s);
    string word;
    int flg = 0;
    while (ss>>word)
    {
        if (word==fixedword)
        {
            flg = 1;
        }  
    }

    if (flg ==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}