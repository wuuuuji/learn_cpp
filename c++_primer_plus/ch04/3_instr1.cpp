//
// Created by 84019 on 2022/7/8.
//

#include <iostream>
int main()
{
    using namespace std;
    const int Arsize = 20;  // 尺寸为20
    char name[Arsize];
    char dessert[Arsize];   // 甜点字符串

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}