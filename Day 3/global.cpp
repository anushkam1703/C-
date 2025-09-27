#include<iostream>
using namespace std;

int y = 10;
void show();

int main()
{
    cout<<y<<endl;
    y++;
    show();
    cout<<y<<endl;
}

void show()
{
    cout<<y<<endl;
    y=0;
    cout<<y<<endl;
    y++;
    cout<<y<<endl;
}