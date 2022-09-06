//
// Created by 84019 on 2022/9/6.
//

#include <iostream>
#include <cstring>

using namespace std;
const char DONE[] = "done";

int main(){
    cout << "Enter words (to stop, type the word done): ";
    string words;
    int counter = 0;
    do {
        cin >> words;
        cin.get();
        counter++;
    } while (words != DONE);

    cout << " Yor enter a total of " << counter - 1 << " words." << endl;

    return 0;
}