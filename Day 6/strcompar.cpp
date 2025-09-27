#include<iostream>
using namespace std;
#include<string.h>


int main()
{
    string str1, str2;

    cout<<"Enter string 1 : \n";
    cin>>str1;
    cout<<"Enter string 2 : \n";
    cin>>str2;
    // cout<<"Enter string 3 : \n";
    // cin>>str3;
    
    int result1 = str1.compare(str2);

    if(result1<0)
    {
        cout<<"String 1 before String 2";
    }

    return 0;
}