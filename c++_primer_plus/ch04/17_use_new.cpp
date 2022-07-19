//
// Created by 84019 on 2022/7/18.
//

#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int *pt = new int;  // 开辟一个int类型的空间
    *pt = 1001;     // 存储一个数值

    cout << "nights value = ";
    cout << nights << ": location = " << &nights << endl;
    cout << "int value = " << *pt << ": location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;
    cout << "int value = " << *pd << ": location = " << pd<< endl;
    cout << "location of pointer pd: " << &pd << endl;

    cout << "size of pt = " << sizeof pt;
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}