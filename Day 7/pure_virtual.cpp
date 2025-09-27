/* 1.Base class initialization in c++
   2. Pure Virtual 
   3. Dyanamic binding
   4.  */

#include<iostream>
#include<math.h>
using namespace std;

class Shape {

    int id;
    public:
    virtual void area () = 0;
    /*If not to make it abstract class, we can do it by
        virtal void area() {
            return ;
        } 
    */

    /*Pure virtual function cannot be overloaded*/
    virtual void area(int, int) {
        cout<<"Undefined entity"<<endl;
    }
};

class Rectangle : public Shape {

    int len, bre;
    public: 
    Rectangle(int b, int c){
        len = b;
        bre = c;
    }

    void area() {
        cout <<"Area of rectangle :"<< len*bre <<endl;
    }

}; 

class Circle : public Rectangle {
    
    int radius;
    public:
    Circle (int len, int bre, int r) : Rectangle(len, bre){
        radius = r;
    }  

    void area () {
        cout<<"Area of Circle :"<<3.14*pow(radius,2)<<endl;
    }

};

int main() {
    /*Object on heap*/
    Shape* s1 = new Rectangle(5, 6);
    s1->area();

    /*Object on Stack*/
    Circle s2(2,3,1);
    s2.area();

}