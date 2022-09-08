//
// Created by 84019 on 2022/9/8.
//

#include <iostream>
#include <cctype>
int main()
{
    using namespace std;

    int whitespace = 0;     // 空格
    int digits = 0;     // 数字
    int chars = 0;      // 字符
    int punct = 0;      // 标点符号
    int other = 0;      // 其他
    char ch;    // 输入

    cout << "Enter text for analysis, and type @ to terminate input.\n";
    // 输入文本进行分析，然后键入 @ 以终止输入
    cin.get(ch);
    while (ch!='@')
    {
        if(isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            other++;
        cin.get(ch);
    }

    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << other << " others.";

    return 0;
}