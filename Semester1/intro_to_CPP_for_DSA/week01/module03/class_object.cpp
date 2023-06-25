#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};



int main()
{
    Student rahim;
    char nm[100]="Rahim";
    strcpy(rahim.name, nm);
    rahim.roll= 20;
    rahim.cls=10;
    rahim.section='A';

    Student karim;
    char nm2[100]="Karim";
    strcpy(karim.name, nm2);
    karim.roll= 1;
    karim.cls=10;
    karim.section='B';

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;
    cout<<karim.name<<" "<<karim.roll<<" "<<karim.cls<<" "<<karim.section<<endl;


    

    return 0;
}