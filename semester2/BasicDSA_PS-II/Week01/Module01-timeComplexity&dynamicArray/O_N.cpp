#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;//O(1)
    cin>>n;// O(1)
    int a[n]; //O(1)
    for (int i = 0; i < n; i++) //O(N)
    {
        cin>>a[i];//O(1)
    }
    int s = 0; //O(1)
    for (int i = 0; i < n; i++) //O(N) 
    {
        s+=a[i]; //O(1)
    }

    cout<<s<<endl;    
    
    return 0;
}


//  this program have O(N) complexity