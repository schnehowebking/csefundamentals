#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;// syntax for create heap/dynamic memory

    *p= 10;

    cout<<*p<<endl;

    float *f = new float;// syntax for create heap/dynamic memory

    *f= 10.25;

    cout<<*f<<endl;

    delete f;// delete data from heap/ dynamic memory


    return 0;
}