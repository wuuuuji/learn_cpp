//
// Created by 84019 on 2022/8/30.
//

#include <iostream>
int main(){
    using namespace std;

    int min_num, max_num, sum;

    cout << "Enter the first number: ";
    cin >> min_num;
    cout << "Enter the second number: ";
    cin >> max_num;
    for(int i = min_num; i <= max_num; i++){
        sum += i;
    }
    cout << "The sum of " << min_num << " +...+ " << max_num << " is ";
    cout << sum << endl;
    return 0;
}