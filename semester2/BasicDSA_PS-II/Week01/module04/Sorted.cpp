#include <bits/stdc++.h>

using namespace std;

bool is_sorted(int a[], int s)
{
    for (int i = 1; i < s; i++)
    {
        if(a[i]<a[i-1])
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    // Write your code here
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }
        
        if (is_sorted(arr, x))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}