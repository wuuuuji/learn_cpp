//
// Created by 84019 on 2022/8/5.
//

#include <iostream>

const int ArSize = 20;

int main(){
    using namespace std;
    char name[ArSize];
    cout << "Your first name, please:";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;
    while (name[i] != '\0'){    // while(name[i])这样也可以
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}