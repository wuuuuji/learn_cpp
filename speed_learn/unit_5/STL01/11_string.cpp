//
// Created by 84019 on 2022/11/8.
// string substr(int pos = 0, int n = npos) const;   //������pos��ʼ��n���ַ���ɵ��ַ���
// string �Ӵ�


#include <iostream>
#include <string>

using namespace std;

//�Ӵ�
void test01()
{

    string str = "abcdefg";
    string subStr = str.substr(1, 3);
    cout << "subStr = " << subStr << endl;

    string email = "hello@sina.com";
    int pos = email.find("@");
    string username = email.substr(0, pos);
    cout << "username: " << username << endl;

}

int main()
{
    test01();
    system("pause");
    return 0;
}