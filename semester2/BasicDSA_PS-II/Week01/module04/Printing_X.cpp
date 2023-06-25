#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==n/2+1 && j==n/2+1)
            {
                cout<<"X";
                continue;
            }

            if(j==i || j== n+1-i)
            {
                if(j==i)
                {
                    cout<<"\\";
                }
                else
                {
                    cout<<"/";
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
   
    return 0;
}