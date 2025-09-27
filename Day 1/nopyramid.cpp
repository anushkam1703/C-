#include <iostream>
using namespace std;



int main() {
    int rows=5;
   for (int i = 1; i <= rows; i++) {
        
        for (int j = 0; j < rows - i; j++) {
           cout << "  ";
        }

        for (int j = i; j < 2 * i; j++) {
            cout << j << " ";
        }

        
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout <<endl;
    }

    return 0;
}