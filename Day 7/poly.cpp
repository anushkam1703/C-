
//case 1: object creation on stack with out virtual keyword


#include<iostream>
using namespace std;

class Employee
{
    int id;
    public:
    
        Employee();
        Employee(int);
        int findsalary(){
            return 0;
        };
        void display();

    
};

Employee :: Employee()
{
    cout<<"Default arg is : \n";
    id=0; // with virtual , have to initialize 0 (if not then garbage value will print)

}

Employee :: Employee(int i)
{
    cout<<"Parameter is : \n";
    id = i;
}

void Employee :: display()
{
    cout<<" Employee id "<<id<<endl;
}

class WageEmployee : public Employee
{
    int hrs, rate;
    public:
    WageEmployee();
    WageEmployee(int,int,int);
    void display();
    int findsalary();
};

WageEmployee :: WageEmployee()
{
    cout<<"Default value is : \n";
    hrs = 0;
    rate = 0;
}

WageEmployee :: WageEmployee(int i, int h, int r):Employee(i)
{
    cout<<"Para value is : \n";
    hrs = h;
    rate = r;
}

int WageEmployee :: findsalary()
{
    return hrs * rate;
}

void WageEmployee :: display()
{
    Employee::display();
    cout<<hrs<<endl;
    cout<<rate<<endl;
}

int main()
{
    Employee * ptr;
    WageEmployee w1(10,40,50);
    ptr = &w1;
    cout<<"Salary is : "<<ptr->findsalary();
    ptr -> display();
   
   
}