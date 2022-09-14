//
// Created by 84019 on 2022/9/13.
//

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    while ( cin.get(ch) && ch != '@')
    {
        if (isdigit(ch)){
            continue;
        } else if (islower(ch)){
            ch = toupper(ch);
        } else if (isupper(ch)){
            ch = tolower(ch);
        }
        cout << ch;
    }
    return 0;
}