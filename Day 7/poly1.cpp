
//case 1: object creation on heap with virtual keyword


#include<iostream>
using namespace std;

class Rect{
    int l;
    public:
    Rect();
    Rect(int);
    virtual int Area(){
        return 0;
    }
    virtual void display();
};

Rect::Rect()
{
    cout<<"default length :\n";
    l=0; 
}

Rect::Rect(int Length)
{
    cout<<"Rect length is: \n";
     l=Length;
}

void Rect::display(){

    cout<<" "<<l<<endl;

}

class Circle: public Rect
{
    int Radius ;
public:
    Circle();
    Circle(int,int);
    int Area();
    void display();
};

Circle:: Circle(){
    cout<<"DEf value is: \n";
     Radius=0;
}

Circle:: Circle(int l,int r): Rect (l)
{
    Radius=r;
}

int Circle:: Area(){

    return 3.14*Radius*Radius;
}

int main(){

    Rect *ptr = new Circle(20);
    
    ptr->Area();
    ptr->display();
}