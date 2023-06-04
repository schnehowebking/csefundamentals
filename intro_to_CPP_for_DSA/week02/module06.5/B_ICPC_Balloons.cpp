#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int count[26] = {0};
        int totalBalloons = 0;

        for (char c : s) {
            int idx = c - 'A';
            count[idx]++;
            
            if (count[idx] == 1)
                totalBalloons++;
        }
        
        cout << totalBalloons << endl;
    }
    return 0;
}