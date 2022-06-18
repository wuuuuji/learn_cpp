//
// Created by 84019 on 2022/6/18.
//
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // 整型转为浮点型
    int guess(3.9832);  // 双精度转整型
    int debt = 7.2E12;  // 结果未在 C++ 中定义
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;

}
