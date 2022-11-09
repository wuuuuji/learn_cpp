//
// Created by 84019 on 2022/11/9.
// deque构造函数
// deque<T>` deqT;              /默认构造形式
// deque(beg, end);             //构造函数将[beg, end)区间中的元素拷贝给本身。
// deque(n, elem);              //构造函数将n个elem拷贝给本身。
// deque(const deque &deq);     //拷贝构造函数

#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int>&d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end() ; it ++) {
            cout << *it << " ";
    }
    cout << endl;
}

void test01(){
    deque<int> d1;
    for (int i = 0; i < 10; ++i) {
        d1.push_back(i);
    }
    printDeque(d1);
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    deque<int>d3(10,100);
    printDeque(d3);

    deque<int>d4 = d3;
    printDeque(d4);
}

int main()
{
    test01();

    system("pause");
    return 0;
}