//
// Created by 84019 on 2022/7/18.
//

#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;    // 声明一个int类型的变量
    int* p_updates;     // 声明一个int类型的指针
    p_updates  = &updates;  // 指向updates的地址

    // 两种表达数值的方式
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // 两种表达地址的方式
    cout << "Addresses: &updates = " << &updates;
    cout << ", *p_update = " << p_updates << endl;

    // 用指针修改值
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}