#include<iostream>
using namespace std;

int x= 10;
void display();

int main()
{
    cout<<x<<endl; //10
    x++; 
    cout<<x<<endl;// 11
    display(); 
    cout<<x<<endl; //11
}

void display()
{
    cout<<x<<endl; //11
    static int x = 5;
    cout<<x<<endl; //0
    x++;
    cout<<x<<endl; //1
}

// static int x =10;

// int main()
// {
//     static int y;
//     cout<<y;
// }