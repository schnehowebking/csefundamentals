#include<bits/stdc++.h>
// #include<algorithm> //for min max
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int mn = min(a,b);// built-in min() function on algorithm header file
    int mx = max(a,b);// built-in max() function on algorithm header file

    cout<<"Min = "<<mn<<endl<<"Max = "<<mx;

    
    return 0;
}