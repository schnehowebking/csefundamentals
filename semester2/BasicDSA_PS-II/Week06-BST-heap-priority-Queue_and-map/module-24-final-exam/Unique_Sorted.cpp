#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Write your code here

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        set<int> s;
        for (int i = 0; i < x; i++)
        {
            int num;
            cin >> num;
            s.insert(num);
        }

        map<int, int, greater<int>> mp;
        for (auto num : s)
        {
            mp[num]++;
        }

        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            cout << it->first << " ";
        }
        cout << endl;
    }

    return 0;
}
