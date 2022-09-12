//
// Created by 84019 on 2022/9/12.
//

#include <iostream>
const int Max = 5;
using namespace std;
int main()
{
    int golf[Max];

    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";

    int i;
    for(i =0; i < Max; i++)
    {
        cout << "Round #" << i + 1 << ": " << endl;
        while (!(cin >> golf[i]))      // 当发现用户输入错的值
        {
            cin.clear();    // 删除缓存区
            while (cin.get() != '\n');  // 删除错误的数
            cout << "Please enter a number:";
        }
    }
    double total = 0.0;
    for (int i = 0; i < Max; ++i) {
        total += golf[i];
    }
    cout << total/Max << "= average score " << Max << " rounds\n";
    return 0;
}