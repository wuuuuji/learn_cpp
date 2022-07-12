//
// Created by 84019 on 2022/7/10.
//

#include <iostream>
#include <string>

#include <cstring>

int main()
{
    using namespace std;
    char char_r1[20];
    string str;

    cout << "Length of string in char_r1 before input: "
         << strlen(char_r1) << endl;    // c
    cout << "Length of string in str before input: "
         << str.size() << endl;     // c++
    cout << "Enter a line of text: \n";
    cin.getline(char_r1, 20);   // indicate maximum length最大长度
    cout << "You entered: " << char_r1 << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);      // 这时候cin是一个参数，而不是说明符了
    cout << "You entered: " << str << endl;
    cout << "Length of string in char_r1 after input: "
         << strlen(char_r1) << endl;    // c
    cout << "Length of string in str after input: "
         << str.size() << endl;     // c++
    return 0;
}