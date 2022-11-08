//
// Created by 84019 on 2022/11/8.
// string 字符存取
// char& operator[](int n);     //通过[]方式取字符
// char& at(int n);            //通过at方法获取字符

#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string str = "hello";
    cout << "str = " << str << endl;

    // 通过 [] 访问单个字符
    for (int i = 0; i < str.size(); ++i) {
        cout << str[i] << " ";
    }
    cout << endl;

    // 通过 at 获取字符
    for (int i = 0; i < str.size(); ++i) {
        cout << str.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}