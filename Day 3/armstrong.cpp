//Armstrong 153 = 1^3 + 5^3 + 3^3 = 153

#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    int num, sum = 0, ogno;
    int rem;
    
    cout<<"Enter the number : \n";
    cin>>num;

    ogno = num;
    while(num !=0)
    {
        int rem = num %10;
        sum = sum + rem*rem*rem;
        num =num /10;
        
    }
    //  cout<<"The num is :"<<num<<endl;
    
    if (ogno == sum)
    {
        cout<<"Armstrong";
    }
    else{
        cout<<" Not Armstrong";
    }

   

}

















































