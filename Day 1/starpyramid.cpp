#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    for (int i = rows; i >= 1; --i) {
        // Print leading spaces
        for (int j = 0; j < rows - i; ++j) {
            cout << "  ";
        }
        // Print asterisks
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "* ";
        }
        cout <<endl;
    }
    return 0;
}