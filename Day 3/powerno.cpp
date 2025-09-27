#include<iostream>
using namespace std;

int main()
{
    int i;
    int base, exponent, result = 1 ;
    cout<<"Enter the value of base : \n";
    cin>>base;

    cout<<"Enter the value of Exponent : \n";
    cin>>exponent;

    for(int i=1; i<=exponent; i++)
    {
       result = result * base;
       
       
    }

    cout<<"The Power is : "<<result<<endl;
}