//
// 字符串比较
// Created by 84019 on 2022/11/8.
// int compare(const string &s) const;  //与字符串s比较
// int compare(const char *s) const;      //与字符串s比较
//

#include <iostream>
#include <string>

using namespace std;

// 字符串比较
void test01()
{
    string str1 = "xello";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 等于 str2" << endl;
    } else if (str1.compare(str2) > 0)
    {
        cout << "str1 大于 str2" << endl;
    }else
    {
        cout << "str1 小于 str2" << endl;
    }
}



int main()
{
    test01();

    system("pause");
    return 0;
}
