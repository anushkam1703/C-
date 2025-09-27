#include<iostream>
#include<string.h>
using namespace std;


int main()
{
    string og;
    string revStr="" ;
    cout<<"Enter the String : \n";
    cin>> og;
    for(int i= og.length()-1;i>=0;i--){
        revStr= revStr+ og[i];

    }
    cout << "Original string: \n" << og<<endl;
    cout << "Reversed String: \n" << revStr;

}