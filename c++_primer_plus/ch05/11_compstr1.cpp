//
// Created by 84019 on 2022/8/5.
//

#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate") ; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}