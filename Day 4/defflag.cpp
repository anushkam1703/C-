#include<iostream>
using namespace std;
void func(int a, bool flag = true)
{
		if (flag == true ) 
		{
			cout<< "Flag is true. a = " << a;
      	        }
		else
		{
			cout<< "Flag is false. a = " << a;
        	}
}
int main()
{
	func(200, false);
}