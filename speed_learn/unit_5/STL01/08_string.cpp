//
// �ַ����Ƚ�
// Created by 84019 on 2022/11/8.
// int compare(const string &s) const;  //���ַ���s�Ƚ�
// int compare(const char *s) const;      //���ַ���s�Ƚ�
//

#include <iostream>
#include <string>

using namespace std;

// �ַ����Ƚ�
void test01()
{
    string str1 = "xello";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 ���� str2" << endl;
    } else if (str1.compare(str2) > 0)
    {
        cout << "str1 ���� str2" << endl;
    }else
    {
        cout << "str1 С�� str2" << endl;
    }
}



int main()
{
    test01();

    system("pause");
    return 0;
}
