#include<iostream>
using namespace std;
#include<string.h>

void user_strconcatenate(char*, char*);

int main()
{
    char str1[50], str2[20];
    cout<<"Enter string 1 : \n";
    cin>>str1;
    cout<<"Enter string 2 : \n";
    cin>>str2;

    user_strconcatenate(str1, str2);
    cout<<"The Concatenated String is : \n"<<str1;

}

void user_strconcatenate(char* s1,char* s2)
{
    while(*s1 !=0)
    {
    s1++;

    }

    while(*s2 !=0)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
} 