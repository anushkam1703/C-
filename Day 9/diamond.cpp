#include<iostream>
using namespace std;
class Animal{
public:
    Animal(int x)  { cout << "Animal()construct called" << endl;   }
};
 
class Dog : public Animal {
 public:
    Dog(int x):Animal(x)   {
       cout<<"Dog() construct called"<< endl;
    }
};
 
class Cat : public Animal {
public:
    Cat(int x):Animal(x) {
        cout<<"Cat( )construct called"<< endl;
    }
};
 
class Pet : public Cat, public Dog  {
public:
    Pet(int x):Dog(x), Cat(x)   {
        cout<<"Pet() construct called"<< endl;
    }
};
 
int main()  {
    Pet P1;
}


