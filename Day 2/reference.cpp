// PASS BY VALUE
// PASS BY REFERENCE
// PASS BY ADDRESS

#include<iostream>
using namespace std;

/*PASS BY VALUE*/

// void swap(int , int );

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(a,b);
//     cout<<"before swapping \n";
//     cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\t";

    // swap(a,b);
    // cout<<endl;
    // cout<<" After swapping \n";
    // cout<<"a"<<a<<"\t"<<"b"<<b;

// }

// void swap(int p, int q)
// {
//     int temp ;
//     temp = p;
//     p = q;
//     q = temp;
//     cout<<"p = "<<p<<"q = "<<q;
// }

/*PASS BY ADDRESS*/

// void swap(int* , int* );

// int main()
// {
//     int a = 10;
//     int b = 20;
//     swap(&a,&b);
//     cout<<"before swapping \n";
//     cout<<"a = "<<a<<"\t"<<"b = "<<b<<"\t";

    // swap(a,b);
    // cout<<endl;
    // cout<<" After swapping \n";
    // cout<<"a"<<a<<"\t"<<"b"<<b;

// }

// void swap(int* p, int* q)
// {
//     int temp ;
//     temp = *p;
//     *p = *q;
//     *q = temp;
//     cout<<"p = "<<*p<<"q = "<<*q;
// }

/*PASS BY REFERENCE*/

#include <iostream>

using namespace std; 

int main() {
    int a = 10;
    int b = 20;
    
    cout << endl;
    cout << "before swapping \n";
    cout << "a = " << a << "\t" << "b = " << b << "\t";
    swap(a, b);
    cout << endl;
    cout << "After swapping \n";
    cout << "a = " << a << "\t" << "b = " << b;
  
    return 0;
}

void swap(int& p, int& q) {
    int temp;
    temp = p;
    p = q;
    q = temp;
    
    cout << endl<<endl;
    cout<<"After swapping \n";
    
    
}