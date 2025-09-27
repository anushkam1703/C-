#include<iostream>
using namespace std;
class A
{
	public:
    int c=10;
	int a=20;
protected:
	int b=5;
public:
	void display1()
	{
		cout<<"in display of A\n"<<endl<<a<<endl;
	}
};
class B
{
public:
int c1=4;
public:
	void display2()
	{
	   
		cout<<"in display of B\n"<<c1<<endl;
	}
};
class C:public A,public B
{
	public:
	void show()
	{
	  
		cout<<"from display of A\n"<<c;
	}
};
int main()
{
	C bobj;
	
    bobj.display1();
    bobj.display2();
    bobj.show();
//	bobj.display(); not allowed
}