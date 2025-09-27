
    #include <iostream>
    using namespace std;

    int main() {
    /*Print Pascal's triangle*/
     for (int i = 0; i < 6; i++) {

        for(int j=6-i; j>0; j--){
            cout<<"  ";
        }

        int val = 1;
        for (int k = 0; k <= i; k++) {
            cout << val <<"   ";
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }
    cout<<endl;
    cout<<"----------------------"<<endl;
    cout<<endl;
    }