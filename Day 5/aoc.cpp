 // C++ program to demonstrate public
 //Area of circle
 
 #include<iostream>
 using namespace std;

 class Circle
 {
    public:
    double radius;

    double compute_area()
    {
          return 3.14 * radius * radius;
    }


 };

 int main()
 {
    Circle obj1;
    obj1.radius = 60.30;
    
    cout<<"Radius is : "<<obj1.radius;
    cout<<"Area of circle is : "<<obj1.compute_area();
    return 0;
}

