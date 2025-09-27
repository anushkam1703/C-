//CASE1 

#include<iostream>
using namespace std;

class A
{
    int a;
    public:

    A();
    void display();
};

A::A()
{
    cout<<"Default : \n";
     a = 10;
}

void A :: display()
{
    cout<<a<<endl;
};

class B : public A
{
    int b;
    public:
    B();
    void display();
};

B::B()
{
     cout<<"Default : \n";
     b = 20;
}

void B :: display()
{
    A::display();
    cout<<b<<endl;
};

int main()
{
    B obj1;
    obj1.display();
}

