#include<iostream>
using namespace std;

class Student
{
    int id;
    char name;
    float fee;

    public:

    void get()
    {
        cout<<"Enter id : \n";
        cin>>id;
        cout<<"Enter fee : \n";
        cin>> fee;

    }
};

int main()
{
    Student obj1;

    obj1.get();
       
}