//
// Created by 84019 on 2022/9/17.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void)
{
    string words;
    int vowels = 0, consonats = 0, other = 0;

    cout << "Enter words (q to quit):" << endl;
    while ((cin >> words) && words != "q"){
        if (isalpha(words[0])){
            switch (words[0]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowels++;
                    break;
                default:
                    consonats++;
            }
        } else
            other ++;
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonats << " words beginning with consonants" << endl;
    cout << other << " others";
    cin.get();
    cin.get();

    return 0;
}