//
// Created by 84019 on 2022/9/8.
//

#include <iostream>
int main()
{
    using namespace std;
    int a,b;
    int c;

    cout << "Enter two integers: ";
    cin >> a >> b; // 输入两个变量存到a和b中

    c = a > b ? a : b;
    cout << "The larger of " << a << " and " << b << " is " << c;
    return 0;
}