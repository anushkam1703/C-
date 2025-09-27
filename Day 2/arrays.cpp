#include<iostream>
using namespace std;

int main()
{
    int a[4] [4];
    int i,j;
    cout<<"Enter the elements of array : \n";

    for(int i=0;i<=3;i++)
    {
        for(int j=0; j<=3; j++)
        {
           cin>>*(*(a+i)+j); 
        }
    }

    cout<<"Display the elements of array : \n";
    for(int i = 0; i<=3; i++)
    {
        for(int j=0; j<=3; j++)
        {
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<endl;
    }
}