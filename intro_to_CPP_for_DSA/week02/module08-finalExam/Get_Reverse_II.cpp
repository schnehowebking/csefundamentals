#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int clss;
        char section;
        int id;
};


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].clss>>a[i].section>>a[i].id;
    }
    for (int i = 0; i < n/2; i++)
    {
     
      swap(a[i].id, a[n-i-1].id);
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].clss<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    
 
    return 0;
}