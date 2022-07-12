//
// Created by 84019 on 2022/7/10.
//

# include <iostream>
# include <string>      // 使字符串类可用
# include <cstring>     // c语言的字符串库
int main()
{
    using namespace std;
    char char_r1[20];
    char char_r2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // 字符串对象和字符数组的赋值
    str1 = str2;    // 复制str2给ste1 c++
    strcpy(char_r1, char_r2);   // 复制char_r2给char_r1 c

    // 附加字符串对象和字符数组
    str1 += " paste";   // 在str1后面加" paste" c++
    strcat(char_r1, " juice");  // 在char_r1后面加" juice" c

    // 查找字符串对象和 C 风格字符串的长度
    int len1 = str1.size();     // str1的长度 c++
    int len2 = strlen(char_r1);     // char_r1的长度 c

    cout << "The String " << str1 << " contains "
         << len1 <<" characters.\n";
    cout << "The String " << str2 << " contains "
         << len2 <<" characters.\n";

    return 0;
}