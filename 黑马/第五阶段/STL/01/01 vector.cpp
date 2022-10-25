//
// Created by 84019 on 2022/10/23.
//

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    // 创建一个vector容器，数组
    vector<int> v;

    // 向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // 通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin();    // 起始迭代器，指向容器器中的第一个元素
    vector<int>::iterator itEnd = v.end();  // 结束迭代器 指向容器中最后一个元素的下一个位置

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