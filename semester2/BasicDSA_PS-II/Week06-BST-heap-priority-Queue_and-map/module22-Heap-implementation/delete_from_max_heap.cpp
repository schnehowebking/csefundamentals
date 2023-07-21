#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cr_idx = v.size() - 1;
    while (cr_idx != 0) // complexity O(logN)
    {
        int parent_idx = (cr_idx - 1) / 2;
        if (v[parent_idx] < v[cr_idx])
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

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int crr = 0;

    while (true)
    {
        int left = crr * 2 + 1;
        int right = crr * 2 + 2;
        int last_idx = v.size() - 1;
        if (left <= last_idx && right <= last_idx)
        {
            if (v[left] >= v[right] && v[left] > v[crr])
            {
                swap(v[left], v[crr]);
                crr = left;
            }
            else if (v[right] >= v[left] && v[right] > v[crr])
            {
                swap(v[right], v[crr]);
                crr = right;
            }
            else
            {
                break;
            }
        }
        else if (left <= last_idx)
        {
            if (v[left] > v[crr])
            {
                swap(v[left], v[crr]);
                crr = left;
            }
            else
            {
                break;
            }
        }
        else if (right <= last_idx)
        {
            if (v[right] > v[crr])
            {
                swap(v[right], v[crr]);
                crr = left;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}

void prinHeap(vector<int>v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);
    // delete_heap(v);
    // delete_heap(v);
    // delete_heap(v);

    for (int val : v)
    {
        cout << val << " ";
    }

    return 0;
}