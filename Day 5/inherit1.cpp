//Public 

#include<iostream>
using namespace std;

class Parent
{
    public:
    int id_p;
};

class Child : public Parent
{
    public:

    int id_c;
};

int main()
{
    Parent obj1;
    Child obj2;
    obj1.id_p = 0;
    obj2.id_c = 1;

    cout<<"Parent id is : \n"<<obj1.id_p<<endl;
    cout<<"Child id is : \n"<<obj2.id_c<<endl;

    cout<<sizeof(obj1)<<endl;
    cout<<sizeof(obj2)<<endl;

    return 0;

}