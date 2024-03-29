//
// Created by 84019 on 2022/9/25.
//
// 递归方法有时使用分治法的策略
// 分治法（divide-and-conquer strategy）

#include <iostream>

const int Len = 66;
const int Divs = 6;
void subdivide(char ar[], int low, int high, int level);
using namespace std;

int main()
{
    char ruler[Len];       // 直尺的长度
    int i;
    for (i = 1; i < Len - 2; i++) {
        ruler[i] = ' ';
    }
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|';
    cout << ruler << endl;
    for (i = 1; i <= Divs ; i++) {
        subdivide(ruler, min, max, i);
        cout << ruler << endl;
        for (int j = 1; j < Len - 2; j++) {
            ruler[j] = ' '; // 重置空格
        }
    }
    return 0;
}

void subdivide(char ar[], int low, int high, int level)
{
    if (level == 0)
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level-1);
    subdivide(ar, mid, high, level-1);
}