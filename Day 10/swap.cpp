#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the values of a and b : \n";
    cin>>a>>b;
    swap(a,b);
    cout<<"After swapping"<<a<<" "<<b;
}

void swap(int p, int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}