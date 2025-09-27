#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char str [90];
    
    int len = strlen(str);

    cout<<"Enter the String \n";
    cin>>str;

    cout<<"Length of string is : \n"<<len<<endl;
    cout<<"Size of string is : \n"<<sizeof(str)<<endl;

}