#include <bits/stdc++.h>
using namespace std;

int main()
{
    // heap is a complete binary tree reprentation with array

    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // complexity O(NlogN)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cr_idx = v.size() - 1;
        while (cr_idx != 0) // complexity O(logN)
        {
            int parent_idx = (cr_idx - 1) / 2;
            if (v[parent_idx] > v[cr_idx])
            {
                swap(v[parent_idx], v[cr_idx]);
            }
            else
            {
                break;
            }
            cr_idx = parent_idx;
        }
    }

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}