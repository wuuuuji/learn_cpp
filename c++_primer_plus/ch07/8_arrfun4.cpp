//
// Created by 84019 on 2022/9/24.
//

#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int  * end);
using namespace std;

int main(){
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // 以十六进制显示地址，sizeof cookies打印的是整个数组的长度
    cout << "cookies address: " << cookies << endl;
    cout << "size of cookies: " << sizeof cookies << endl;
    int sum = sum_arr(cookies, cookies+ArSize);
    cout << "Tool cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, cookies+3);
    cout << "First three eaters ate: " << sum << endl;

    sum = sum_arr(cookies+4, cookies+8);
    cout << "Last four eater ate: " << sum << endl;

    return 0;
}

int sum_arr(const int * begin, const int  * end){
     const int * pt;
     int total = 0;

    for (pt = begin;pt != end;pt++) {
        total = total + *pt;
    }
    return total;
}
