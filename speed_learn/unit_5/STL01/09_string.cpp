//
// Created by 84019 on 2022/11/8.
// string �ַ���ȡ
// char& operator[](int n);     //ͨ��[]��ʽȡ�ַ�
// char& at(int n);            //ͨ��at������ȡ�ַ�

#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string str = "hello";
    cout << "str = " << str << endl;

    // ͨ�� [] ���ʵ����ַ�
    for (int i = 0; i < str.size(); ++i) {
        cout << str[i] << " ";
    }
    cout << endl;

    // ͨ�� at ��ȡ�ַ�
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