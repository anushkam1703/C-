#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {1,2,3,4,5,6};
    int c[3][3];

    // cout<<"Enter elements in Matrix 1 : \n";
    // cin>>a;

    // cout<<"Enter elements in Matrix 2 : \n";
    // cin>>b;

    for(int i=0; i<=2; i++)
    {
        for(int j = 0; j<=2; j++)
        { 
        c[i][j] = a[i] [j] + b[i] [j];}
    }

    for(int i=0; i<=2; i++)
    {
        for(int j = 0; j<=2; j++)
        {
            cout<<" \t"<<c[i][j];
        }
        cout<<endl;
       
    }


}