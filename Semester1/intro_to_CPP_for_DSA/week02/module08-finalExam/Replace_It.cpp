#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here

    int n;
    cin >> n;
    cin.ignore();
    string s[n];
    string x[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> s[i] >> x[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        while (s[i].find(x[i]) != -1)
        {
            s[i].replace(s[i].find(x[i]), x[i].size(), "$");
        }

        cout << s[i] <<endl;
    }

    return 0;
}
