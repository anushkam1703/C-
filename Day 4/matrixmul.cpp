#include<iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{7, 8}, {9, 2}};
    int c[2][2];
    
    
    
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<2; k++)
            {
                c[i][j] += a[i][k] * b[j][k]; 
            }
        }

    }

    cout<<" Multiplication of the Matrix : \n";
    for(int i= 0;  i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
             cout<<c[i][j]<< " ";
        }
    }

   
}