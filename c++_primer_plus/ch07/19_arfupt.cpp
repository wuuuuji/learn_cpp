//
// Created by 84019 on 2022/10/5.
//

#include <iostream>

using namespace std;

const double * f1(const double *ar, int n);
const double * f2(const double ar[], int n);
const double * f3(const double ar[], int n);


int main()
{
    double av[3] = {1112.3, 1542.6, 2227.9};

    // 第一部分
    // pointer to a function 定义一个函数指针
    const double *(*p1)(const double *, int) = f1;    // p1就是函数指针
    auto p2 = f2;   // c++11 中自动分配一个数据类型
    cout << "part1:------------" << endl;
    cout << "Address   Value" << endl;
    cout << (*p1)(av, 3) << ": " << *((*p1)(av, 3)) << endl;    // (*p1)(av, 3) == f1(av, 3)
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;    // p2(av, 3) == f2(av,3)


    // 第二部分
    // pa is an array of pointers pa是一个由指针构成的数组
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    cout << "part2:------------" << endl;
    cout << "Address   Value" << endl;
    for (int i = 0; i < 3; i++) {
        cout << pa[i](av,3) << ": " << *(pa[i](av,3)) << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << pb[i](av,3) << ": " << *(pb[i](av,3)) << endl;
    }

    // 第三部分
    auto pc = &pa;
    // const double *(*(*pc[3]))(const double *, int) = &pa
    // pc指向由三个元素都是函数指针构成的数组
    const double *(*(*pd)[3]) (const double *,int) = &pa;
    // pc(pd) is a pinter to an array of function point
    cout << "part3:------------" << endl;
    cout << "Address   Value" << endl;
    cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
    // (*pc) == pa --> (*pc)[0](av, 3) == pa[0](av, 3)
    const double *pdb = (*pd)[1](av, 3);    // (*pd)[1](av, 3) == pa[1](av, 3)
    cout << pdb << ": " << *pdb << endl;
    cout << (*pd)[2](av, 3) << ": " << *(*pd)[2](av, 3) << endl;
    // 函数指针里面传参
    cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
    // 函数指针的内容取出来再传参

    return 0;
}

const double * f1(const double *ar, int n)
// 只是想返回一个地址，不想对数组进行操作，所以参数和函数名用const
{
    return ar;
}

const double * f2(const double ar[], int n)
{
    return ar + 1;
}

const double * f3(const double ar[], int n)
{
    return ar + 2;
}