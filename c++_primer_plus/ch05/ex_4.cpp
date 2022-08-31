//
// Created by 84019 on 2022/8/30.
//

#include <iostream>

const int base = 100;
using namespace std;
int main(){
    float daphne_deposit = base;
    float cleo_deposit = base;
    int year = 0;
    while (daphne_deposit >= cleo_deposit){
        cout << "In " << year++ << " Year: Daphne = " << daphne_deposit << "\tCleo = " << cleo_deposit << endl;
        daphne_deposit += 0.1*base;
        cleo_deposit += 0.05*cleo_deposit;
    }
    cout << "In " << year++ << " Year: Daphne = " << daphne_deposit << "\tCleo = " << cleo_deposit << endl;
    return 0;
}