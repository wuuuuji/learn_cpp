//
// Created by 84019 on 2022/8/30.
//

#include <iostream>
#include <array>

const int ArSize = 101;
using namespace std;
int main(){
    array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i-1];
    }
    for (int i = 0; i < ArSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}