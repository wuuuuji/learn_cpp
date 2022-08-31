//
// Created by 84019 on 2022/8/30.
//

#include <iostream>

using namespace std;
int main(){
    const string Month[] = {"Jan", "Feb", "Mar",
                            "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep",
                            "Oct", "Nov", "Dec"};
    int sale_amount[12] = {};
    unsigned int sum = 0;
    for (int i = 0; i < 12; ++i) {
        cout << "Enter the sale amount of " << Month[i] << " :";
        cin >> sale_amount[i];
    }
    cout << "Input Done!" << endl;
    for (int i = 0; i < 12; ++i) {
        cout << Month[i] << " SALE :" << sale_amount[i] << endl;
        sum += sale_amount[i];
    }
    cout << "Total sale " << sum << " this year." << endl;
    return 0;
}
