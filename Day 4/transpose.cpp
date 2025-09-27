#include<iostream>
using namespace std;


int main()
{
int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
int c[3][2];

for(int i = 0; i<2;i++)
{
    for(int j=0; j<3; j++)
    {
        c[j][i] = a[i][j];
        
    }
}   

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    


}




// #include <iostream>

// using namespace std;

// int main() {
//     int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int c[3][2];

//     // Transposing the matrix
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             c[j][i] = a[i][j];
//         }
//     }

//     // Printing the transposed matrix
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << c[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }