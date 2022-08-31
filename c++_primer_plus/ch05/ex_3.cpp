//
// Created by 84019 on 2022/8/30.
//

#include <iostream>
int main(){
    using namespace std;
    int sum;
    int temp;
    do {
        cout << "Enter number :";
        cin >> temp;
        sum += temp;
        cout << "The sum = " << sum << endl;
    } while (0 != sum);
    cout << "The sum = " << sum << endl;
    return 0;
}