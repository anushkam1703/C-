#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate : ";
    cin >> rate;
    cout << "Enter the time in years: ";
    cin >> time;

    float amount = principal;
    for (int i = 0; i < time; ++i) {
        amount = amount * (1 + rate);
    }
    float CI = amount - principal;

   
    
    cout << "Principal Amount: " << principal << endl;
    cout << "Annual Interest Rate: " << rate * 100 << "%" <<endl;
    cout << "Time: " << time << " years" <<endl;
   
    cout << "Amount after " << time << " years: " << amount <<endl;
    cout << "Compound Interest: " <<CI <<endl;
   

    return 0;
}