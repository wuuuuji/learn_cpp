//
// Created by 84019 on 2022/7/10.
//

#include <iostream>
#include <string>

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;
    char char_r1[20];
    char char_r2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> char_r1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines: \n";
    cout << char_r1 << " " << char_r2 << " "
         << str1 << " " << str2 << endl;
    cout << "The third letter in " << char_r2 << " is "
         << char_r2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    return 0;
}