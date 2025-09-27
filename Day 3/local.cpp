#include<iostream>
using namespace std;
int y=10;
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
    int x  = 0;
   cout<<x<<endl;
    x++;
    cout<<x<<endl;
    // cout<<y<<endl;
}

