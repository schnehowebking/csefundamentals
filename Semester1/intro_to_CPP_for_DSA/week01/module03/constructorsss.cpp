#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(char* n, int r, int c, int s)
        {
            strcpy(name, n);
            roll = r;
            cls = c;
            section = s; 
        }
};



int main()
{
    char nm[100]="Rahim";
    Student rahim(nm, 2, 10, 'A');

    char nm2[100]="Karim";
    Student karim(nm2, 1, 10, 'B');
    

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;
    cout<<karim.name<<" "<<karim.roll<<" "<<karim.cls<<" "<<karim.section<<endl;


    

    return 0;
}