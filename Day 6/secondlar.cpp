#include<iostream>
using namespace std;
#include<climits>
int main()
{
    int n[] = {2, 50, 30, 10, 40};
    int size = sizeof (n) / sizeof (n[0]);
    int secondnum= INT_MIN;
    int largest = INT_MIN;

    
    for(int i = 0; i<size; i++)
    {
        if(n[i]>largest)
        {
            
            largest = secondnum;
            largest = n[i];
        }

        if (n[i]>secondnum && n[i] != largest)
        {
            secondnum = n[i];
        }
        
    }

    if(secondnum == INT_MIN)
        {
            cout<<"No second Largest element \n";
        }
        else{
            cout<<"Second Largest element is : \n"<<secondnum;
        }
        return 0;
}