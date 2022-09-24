//
// Created by 84019 on 2022/9/22.
//

#include <iostream>

using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main(void)
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // 以十六进制显示地址，sizeof cookies打印的是整个数组的长度
    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof cookies << endl;
    int sum = sum_arr(cookies, ArSize);
    cout << "Tool cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate: " << sum << endl;

    sum = sum_arr(cookies+4, 4);
    cout << "Last four eater ate: " << sum << endl;

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total;

    cout << "arr address: " << arr << endl;
    cout << "size of arr: " << sizeof arr << endl;
    // 这计算的就是一个整形指针的大小， 编译器会报错，但是可以编译
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}