#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int firstSum = 0;
        int secondSum = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size()/2)
                firstSum += s[i] - '0';
            else
                secondSum += s[i] - '0';
        }
        
        if (firstSum == secondSum) 
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}