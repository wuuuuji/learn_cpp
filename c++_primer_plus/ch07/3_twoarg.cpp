//
// Created by 84019 on 2022/9/21.
//

#include <iostream>
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    while (ch!='q')
    {
        cout << "Enter a integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << endl;
        cout << "Enter another character or press q_key to quit: " << endl;
        cin >> ch;
    }
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}