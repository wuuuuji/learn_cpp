//
// Created by 84019 on 2022/10/23.
//

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    // ����һ��vector����������
    vector<int> v;

    // �������в�������
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // ͨ�����������������е�����
    vector<int>::iterator itBegin = v.begin();    // ��ʼ��������ָ���������еĵ�һ��Ԫ��
    vector<int>::iterator itEnd = v.end();  // ���������� ָ�����������һ��Ԫ�ص���һ��λ��

    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }
}

int main()
{
    test01();
    system("pause");
    return 0;
}