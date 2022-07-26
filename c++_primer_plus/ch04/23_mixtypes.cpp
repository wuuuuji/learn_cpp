//
// Created by 84019 on 2022/7/24.
//

#include <iostream>

using namespace std;

struct antarctica_years_end
{
    int year;
};

int main()
{
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;

    antarctica_years_end *pa = &s02;
    pa->year = 1999;

    antarctica_years_end trio[3];
    trio[0].year = 2003;

    cout << trio->year << endl;
    // 因为数组名就是第一个数组的地址，所以说会打印第一数组的内容

    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;

    const antarctica_years_end ** ppa = arp;
    // ppa是指向arp这个数组在内存空间里面的一片内存空间的首地址，是一个指向结构体指针的指针。
    cout << (*ppa)->year << endl;

    auto ppb = arp;
    cout << (*(ppb+1))->year << endl;
    // (*(ppb+1))==&s02=s02==1999

    return 0;
}