#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age )
        {
           
            this->name=name;
            this->age=age;
        }
        
};

int main()
{
    Person *rakib = new Person("Schneho Khan", 26);
    Person *sakib = new Person("Sakib Khan", 23);

    // 1 

    // rakib->name = sakib->name;
    // rakib->age = sakib->age;

    // 2 & preferred method

    *rakib = *sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;

    
    return 0;
}