#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: \n";
    cin >> num;

   
    if (num <= 1) {
        cout << "The number is not prime.\n";
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i < num; i++) {
       
        if (num % i == 0) {
            is_prime = false;
            break; 
        }
    }

    if (is_prime) {
        cout << "The number is prime.\n";
    } else {
        cout << "The number is not prime.\n";
    }

    return 0;
}