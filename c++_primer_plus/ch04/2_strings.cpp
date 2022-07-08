//
// Created by 84019 on 2022/7/8.
//

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // 空数组
    char name2[Size]="C++owboy";    // 初始化数组
    cout << "Howdy! I`m " << name2;
    cout << "! What`s your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";  // 只计算可见的字符
    cout << "in an array of " << sizeof(name1)<<" bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';    // 通过修改空字符的位置，来缩短字符串的长度
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    return 0;
}