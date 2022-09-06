//
// Created by 84019 on 2022/9/6.
//

#include <iostream>

using namespace std;
int main(){
    int row_number;

    cout << "Enter number of row: ";
    cin >> row_number;
    for (int i = 0; i < row_number; ++i) {
        for (int j = 0; j < row_number-i-1; ++j) {
            cout << ".";
        }
        for (int j = 0; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}