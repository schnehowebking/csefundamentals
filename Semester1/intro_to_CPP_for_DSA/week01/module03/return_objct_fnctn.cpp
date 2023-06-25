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

Student fun()
{
    char name[100]="Rahim Ullah";
    Student rahim(name, 20, 10, 'A');
    return rahim;

}



int main()
{
    Student rahim=fun();

    cout<<rahim.name<<" "<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.section<<endl;


    

    return 0;
}