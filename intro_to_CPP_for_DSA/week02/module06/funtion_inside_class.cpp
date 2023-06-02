#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1, marks2;
        Person(string n, int ag ,int m1, int m2)
        {
            name=n;
            age=ag;
            marks1= m1;
            marks2= m2;
        }
        void hello()
        {
            cout<<name<<" "<<age<<endl;
        }
        int totalmarks()
        {
            return marks1+marks2;
        }
};

int main()
{
    Person rakib("Schneho Khan", 26, 90,99);
    rakib.hello();
    cout<<rakib.totalmarks()<<endl;

    
    return 0;
}