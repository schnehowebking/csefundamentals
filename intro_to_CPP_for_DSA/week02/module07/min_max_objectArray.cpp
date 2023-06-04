#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};

int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    //for max number
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(a[i].marks>mx.marks)
        {
            mx = a[i];
        }
       
    }

    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    //for min number
    Student mn;

    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if(a[i].marks<mn.marks)
        {
            mn = a[i];
        }
       
    }

    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

 
    return 0;
}