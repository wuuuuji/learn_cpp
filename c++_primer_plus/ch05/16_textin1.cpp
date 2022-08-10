//
// Created by 84019 on 2022/8/9.
//

#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;  // 使用基础输入
    cout << "Enter characters, enter # to quit:\n";
    cin >> ch;      // 得到字符串
    cout << ch << endl;
    while (ch != '#'){      // 测试字符
        cout << ch;     // 输出字符
        ++count;
        cin >> ch;
    }
    return 0;
}