//
// Created by 84019 on 2022/11/8.
// string& insert(int pos, const char* s);            //�����ַ���
// string& insert(int pos, const string& str);        //�����ַ���
// string& insert(int pos, int n, char c);            //��ָ��λ�ò���n���ַ�c
// string& erase(int pos, int n = npos);              //ɾ����Pos��ʼ��n���ַ�
// string�����ɾ��

#include <iostream>
#include <string>

using namespace std;

//�ַ��������ɾ��
void test01()
{
    string str = "hello";
    // ����
    str.insert(1, "111");
    cout << str << endl;
    // ɾ��
    str.erase(1, 3);  //��1��λ�ÿ�ʼ3���ַ�
    cout << str << endl;
}

int main() {

    test01();

    system("pause");

    return 0;
}
