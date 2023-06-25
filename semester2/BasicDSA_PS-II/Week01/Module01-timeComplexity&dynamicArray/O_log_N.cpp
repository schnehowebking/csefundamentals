#include <bits/stdc++.h>
using namespace std;

int main()
{
    // O(N) er theke better
    //  can go the worst case on log 2 base can go 10^18 within 60 steps.
    //

    int n;        // O(1)
    cin >> n;     // O(1)


    while (n > 0) // O(logN)
    {
        int digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }

    // another example of O(logN)
    for (int i = 1; i < n; i*=2) //O(logN)
    {
        cout<<i<<endl;
    }
    

    return 0;
}