#include<iostream>
using namespace std;

int a = 10;
void show();
int main()
{
    
    cout<<" "<<a<<endl;
    a++;
    show();
    cout<<a<<endl;

}

void show()
{
    int a = 0;
    cout<<" "<<a<<endl;
    a++;
    cout<<" "<<a<<endl;
}