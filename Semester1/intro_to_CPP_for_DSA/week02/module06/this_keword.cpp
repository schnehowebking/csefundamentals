#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1, marks2;
        Person(string name, int age ,int marks1, int marks2)
        {
            // "this" is C++ keyword that identify the pointer of that object
            this->name=name;
            this->age=age;
            this->marks1= marks1;
            this->marks2= marks2;
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