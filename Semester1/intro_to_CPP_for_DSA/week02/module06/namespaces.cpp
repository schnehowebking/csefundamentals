// namespace its a large group and more powerfull than Class... Its contain variables, functions & also classes

#include<bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 25;
    void hello()
    {
        cout<<"Rakib Namespace"<<endl;
    }
   
}
namespace Sakib
{
    int age2 = 20;
    void hello2()
    {
        cout<<"Rakib Namespace"<<endl;
    }
   
}

using namespace Rakib;
using namespace Sakib;

int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    return 0;
}