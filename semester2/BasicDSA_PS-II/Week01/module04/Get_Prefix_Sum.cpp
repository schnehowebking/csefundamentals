#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    long long int n;
    cin >> n;
    long long int arry[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    long long int preArry[n];

    preArry[0] = arry[0];

    for (int i = 1; i < n; i++)
    {
        preArry[i] = arry[i] + preArry[i - 1];
    }

    for (int i = n-1; i>=0; i--)
    {
        cout << preArry[i] << " ";
    }

    return 0;
}