//
// Created by 84019 on 2022/11/8.
// string& insert(int pos, const char* s);            //插入字符串
// string& insert(int pos, const string& str);        //插入字符串
// string& insert(int pos, int n, char c);            //在指定位置插入n个字符c
// string& erase(int pos, int n = npos);              //删除从Pos开始的n个字符
// string插入和删除

#include <iostream>
#include <string>

using namespace std;

//字符串插入和删除
void test01()
{
    string str = "hello";
    // 插入
    str.insert(1, "111");
    cout << str << endl;
    // 删除
    str.erase(1, 3);  //从1号位置开始3个字符
    cout << str << endl;
}

int main() {

    test01();

    system("pause");

    return 0;
}
