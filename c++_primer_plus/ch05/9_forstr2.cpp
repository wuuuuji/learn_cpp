//
// Created by 84019 on 2022/8/5.
//
// 输入任何字符串，头尾调换

#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // 物理修改字符串对象
    char temp;
    int i,j;
    for(j = 0, i = word.size() - 1;j < i; --i, ++j){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}