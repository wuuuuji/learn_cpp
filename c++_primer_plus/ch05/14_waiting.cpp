//
// Created by 84019 on 2022/8/6.
//

#include <iostream>
#include <ctime>

int main() {
    using namespace std;
    int i;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // 转换为时钟刻度
    cout << "starting\a\n";
    clock_t start = clock();    // 等待到时间过去
    while (clock() - start < delay) {
        cout << "i = " << i << endl;
        i++;
    }
    cout << "done \a\n";
    return 0;
}