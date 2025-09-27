#include<iostream>
using namespace std;


class Complex
{
    int real;
    int img;

    public:
	Complex();
    Complex(int,int);
    void accept();
    void display() const;
    void setReal(int);
    int getReal() const;
};

void Complex :: accept()
{
    cout<<"Enter the real and imaginary number : \n";
    cin>>real>>img;
}

void Complex :: display() const
{
    cout<<"Complex no is : "<<real<<"+"<<img<<"i"<<endl;
    
}

void Complex :: setReal(int r)
{
    real=r;
}  

int Complex :: getReal() const
{
    return real;
}

Complex::Complex()
{
    cout<<"In default constructor : "<<endl;
    real = 2;
    img = 4;
}

Complex :: Complex(int r, int i)
{
    cout<<"In Para Constructor \n";
    real = r;
    img = i;
}
int main()
{
    const Complex c1(5,6);
    cout<<"Real Part is : \n"<<c1.getReal();
    // c1.accept();
    // c1.display();
    // c1.setReal(10);
    // c1.display();
    Complex c2(2,4);
    c2.setReal(10);
    cout<<"Real Part is : "<<c2.getReal();
}
