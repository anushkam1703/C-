#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    for (int i = 0; i < rows; i++) {
        //  starting ele
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "  "; 
        }
        // characters
        char ch = 'A';
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << ch++ << " ";
        }
        cout <<endl;
    }
    return 0;
}