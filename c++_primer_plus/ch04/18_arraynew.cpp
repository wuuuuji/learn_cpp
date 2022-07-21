//
// Created by 84019 on 2022/7/19.
//

#include <iostream>
int main()
{
    using namespace std;
    double *p3 = new double [3];   // 三个double空间
    p3[0] = 0.2;    // 将 p3 视为数组名称
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;    // 增加指针
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;    // 指针回到起点
    delete [] p3;   // 释放空间
    return 0;
}