#include<iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout<<"Total elements : "<<endl;
    cin>>n;
    for(int i = n; i>=1; i--){
        fact = fact * i;
    }
    cout<<"Fact is : "<<fact<<endl;
}