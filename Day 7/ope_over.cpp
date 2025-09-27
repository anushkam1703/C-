#include<iostream>
using namespace std;

class Complex {
    int real, img;
    public:

    Complex (int a, int b) {
        real = a;
        img = b;
    }

    Complex operator- (Complex& c2_g){
        Complex temp = *this;
        temp.real = temp.real - c2_g.real;
        temp.img = temp.img - c2_g.img;
        return temp;
    }

    void display() {
        cout<<"Subtraction is:"<<this -> real<<this ->img<<"i"<<endl;
    }
    
};

int main() {
    Complex c1(1,2);
    Complex c2(3,4);

    Complex c3 = c1 - c2; // c3 = c1.operator-(c2)
    c3.display();

}