#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int clss;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

int totalMarks(Student a)
{
    return a.math_marks + a.eng_marks;
}


int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].clss >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (totalMarks(a[i])< totalMarks(a[j]))
            {
                swap(a[i], a[j]);
            }
            else if(totalMarks(a[i]) == totalMarks(a[j]))
            {
                if(a[i].id>a[j].id)
                {
                    swap(a[i], a[j]);
                }
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i].name << " " << a[i].clss << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}