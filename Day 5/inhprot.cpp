#include<iostream>
using namespace std;

class Boss
{
    protected:
  int id_protected;  
};

class Employee : public Boss
{
    public:
    void setID(int id)
    {
         
        id_protected = id;
        
    }

    void displayID()
    {
        cout<<"ID is : "<<id_protected;
    }


};

int main()
{
    Boss obj1;
    Employee obj2;

    obj2.setID(80);
    obj2.displayID();
}