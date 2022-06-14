//
// Created by 84019 on 2022/6/13.
//
#include <iostream>
int main()
{
    using namespace std;
    char ch = 'M';  // 将 M 的 ASCII 码分配给 ch
    int i = ch; // 将相同的代码存储在 int 中
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;    // 更改 ch 中的字符代码
    i = ch;    // 在i中保存新的字符代码
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // 使用 cout.put() 成员函数来显示一个字符
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    // 使用 cout.put() 显示一个 char 常量
    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
}
