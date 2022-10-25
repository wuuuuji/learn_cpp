//
// Created by 84019 on 2022/10/23.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void MyPrint(int val)
{
    cout << val << endl;
}

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

    // ��һ�ֱ�����ʽ
/*    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }*/

    // �ڶ��ֱ�����ʽ
    /*for (vector<int>::iterator it = v.begin(); it != v.end() ; it++) {
        cout << *it << endl;
    }*/

    // �����ֱ�����ʽ ����STL�ṩ�����㷨
    for_each(v.begin(),v.end(),MyPrint);

}

int main()
{
    test01();
    system("pause");
    return 0;
}