#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int &refnum = num;

    cout<<num<<endl;
    cout<<&num<<endl;

    num = 100;
    cout<<num<<endl;
    cout<<&refnum<<endl;
}