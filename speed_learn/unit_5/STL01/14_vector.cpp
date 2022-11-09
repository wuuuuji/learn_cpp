//
// Created by 84019 on 2022/11/8.
// vector �����ʹ�С
// push_back(ele);  //β������Ԫ��ele
// pop_back();                                      //ɾ�����һ��Ԫ��
// insert(const_iterator pos, ele);                 //������ָ��λ��pos����Ԫ��ele
// insert(const_iterator pos, int count,ele);       //������ָ��λ��pos����count��Ԫ��ele
// erase(const_iterator pos);                       //ɾ��������ָ���Ԫ��
// erase(const_iterator start, const_iterator end);     //ɾ����������start��end֮���Ԫ��
// clear();     //ɾ������������Ԫ��

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; ++i) {
        v1.push_back(i);
    }
    printVector(v1);
    // βɾ
    v1.pop_back();
    printVector(v1);

    // ����
    //v1.insert(v1.begin(),100);
    //printVector(v1);

    v1.insert(v1.begin(), 2,100);
    printVector(v1);

    // ɾ��
    v1.erase(v1.begin());
    printVector(v1);

    v1.erase(v1.begin(),v1.end());
    printVector(v1);

}

int main()
{
    test01();
    return 0;
}