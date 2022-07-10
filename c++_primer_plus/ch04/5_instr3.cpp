//
// Created by 84019 on 2022/7/8.
//

#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get(); // 读取字符串
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious" << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}