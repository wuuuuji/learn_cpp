//
// Created by 84019 on 2022/8/1.
//

#include <iostream>
int main(){
    using namespace std;
    cout << "The Amazing Account will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 0; i < 5; i++) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Account bids you adieu!\n";
    return 0;
}