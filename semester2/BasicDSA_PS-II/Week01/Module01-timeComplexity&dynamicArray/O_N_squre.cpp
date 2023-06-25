#include<bits/stdc++.h>
using namespace std;

int main()
{   
    //  acceptable value n = 10^3
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) // O(N)
    {
        for (int j = 1 ; j <=n; j++) // O(N)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}

// total complexiity = O(N*N)