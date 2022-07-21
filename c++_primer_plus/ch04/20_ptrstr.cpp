//
// Created by 84019 on 2022/7/21.
//

#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;  // 未初始化uninitialized

    cout << animal << endl;     // 打印动物
    cout << bird << "\n";       // 打印鸟类
    // cout << ps << "\n";     // 可能显示乱码，也可能奔溃

    cout << "Enter a kind of animal: ";
    cin >> animal;      // 输入一个小于20chars的
    // cin >> ps;

    ps = animal;        // 设置ps指向一个字符串
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int  *) animal << endl;    // 强制转化animal为int类型的指针
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int  *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete []ps;

    return 0;
}