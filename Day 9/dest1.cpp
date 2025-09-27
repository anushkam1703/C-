#include<iostream>
using namespace std;

int static Count = 0;

class Test{
    public:
    Test()
    {
    cout<<"Constructors are called "<<Count<<endl;
    Count++;}

    ~Test()
{
    cout<<"Destructors are called "<<Count<<endl;
    Count--;
}

};


int main()
{
    Test t;
    cout<<&t<<endl;
    Test t1;
    cout<<&t1<<endl;
    Test t2;
    cout<<&t2<<endl;
}