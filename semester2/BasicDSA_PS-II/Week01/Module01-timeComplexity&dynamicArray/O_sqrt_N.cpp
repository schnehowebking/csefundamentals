#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=sqrt(n); i++) //O(sqrt(N))
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(n/i !=i) cout<<n/i<<endl;
        }
    }

    // 2nd way( work same as 1st)
    for (int i=1; i*i<=n; i++) //O(sqrt(N))
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(n/i !=i) cout<<n/i<<endl;
        }
    }
    
    
    return 0;
}