//CASE2 

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
     a = 0;
}

void A :: display()
{
    cout<<a<<endl;
};

class B : public A
{
    int b;
    public:
    B(int, int);
    void display();
};

B::B(int p,int q)
{
     cout<<"Default : \n";
     b = q;
}

void B :: display()
{
    A::display();
    cout<<b<<endl;
};

int main()
{
    B obj1(20,30);
    obj1.display();
}

