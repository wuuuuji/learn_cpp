//
// Created by 84019 on 2022/8/5.
//

#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate" ; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}