#include<iostream>
using namespace std;

inline int square (int s) {
    return s*s ;
}
int main()
{
    cout<<"Square of the number is : \n"<<square(5);
    return 0;
}