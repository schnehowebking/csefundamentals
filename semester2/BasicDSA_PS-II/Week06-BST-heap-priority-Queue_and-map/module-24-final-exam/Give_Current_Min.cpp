#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write your code here

    int n, q;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cin >> q;

    priority_queue<int, vector<int>, greater<int>> pqmin;

    for (int i = 0; i < n; ++i)
    {
        pqmin.push(a[i]);
    }

    while (q--) {
        int c;
        cin >> c;

        if (c == 0) {
            int x;
            cin >> x;
            pqmin.push(x);
            cout << pqmin.top() << endl;
        } else if (c == 1) {
            if (!pqmin.empty())
                cout << pqmin.top() << endl;
            else
                cout << "Empty" << endl;
        } else if (c == 2) {
            if (!pqmin.empty()) {
                pqmin.pop();
                if (!pqmin.empty())
                    cout << pqmin.top() << endl;
                else
                    cout << "Empty" << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
