//
// Created by 84019 on 2022/8/13.
//

#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;  // 使用基础输入sssssssss
    while (cin.get(ch)){      // 测试字符
        cout << ch;     // 输出字符
        ++count;
        //cin >> ch;

    }
    cout << endl << count << " characters read\n ";
    cin.get();
    cin.get();
    return 0;
}