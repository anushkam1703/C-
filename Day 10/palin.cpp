#include<iostream>
using namespace std;

int main()
{
    string og;

    cout<<"Enter the string : \n";
    cin>>og;

    string strev = og ;  

    for(int i = 0; i< og.length()-1; i++ )
    {
        strev = strev + og;
     
    }

    // cout<<"The reversed String is : "<<strev<<endl;

    if(og != strev)
    {
        cout<<"The string is not palindrome";
    }
    else{
        cout<<"The string is palindrome";
    }

    return 0;
}