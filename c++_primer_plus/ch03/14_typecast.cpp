//
// Created by 84019 on 2022/7/5.
//
#include <iostream>
int main()
{
    using namespace std;
    int auks, bats, coots;
    // 以下语句将值添加为 double，然后将结果转换为 int。
    auks = 19.99 + 11.99;
    // 这些语句将值添加为 int
    bats = (int) 19.99 + (int) 11.99; // c的用法
    coots = int (19.99) + int (11.99);  // c++的用法
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // 打印结果是int
    cout << int(ch) << endl; // 打印结果是int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl; // 使用强制转换
    return 0;
}
