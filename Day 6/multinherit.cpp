#include<iostream>
using namespace std;
class A
{
    public:
	int a; 
/*public:
	A();
    void display();
 };
A::A()
{
	cout<<"in default of A\n";
	a=10;
}
void A::display()*/

	A::cout<<a<<endl;
};
class B
{
    public:
	int b;
public:
	B();
	void display();
};
B::B()
{
	cout<<"in default of B\n";
	b=20;
}
void B::display()
{
	B::display();
	cout<<b<<endl;
}
class C:public A,public B{
    int c;
public:
	C();
	void display();
};
C::C()
{
	cout<<"in default of C\n";
	c=30;
}
void C::display()
{
	B::display();
	cout<<c<<endl;
}



int main()
{
	C obj;
	obj.display();
}