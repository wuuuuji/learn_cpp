//
// Created by 84019 on 2022/7/31.
//

#include <iostream>
#include <string>

int main(){
    using namespace std;
    cout << "Enter a word: ";
    string word;
    getline(cin,word);

    for (int i = word.size(); i >= 0 ; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
    return 0;
}