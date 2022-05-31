//
// Created by 84019 on 2022/5/30.
//
#include <iostream>

int main(){
    using namespace std;

    int carrots1;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots1;
    cout << "Here are two more.";
    carrots1 = carrots1 + 2;
    cout << "Now you hare " << carrots1 << " carrots." << endl;
    return 0;
}