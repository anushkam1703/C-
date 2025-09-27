#include<iostream>
using namespace std;

class A
{
    int id;
    public:

    void get()
    {
        id = 100;
        cout<<id;
    }


};

int main()
{
    //obj.id=100; //not allowed bcz class is private
    A obj ;
    obj.get();
}   