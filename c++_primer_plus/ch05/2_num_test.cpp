//
// Created by 84019 on 2022/7/30.
//

#include <iostream>

using namespace std;

int main(){
    cout << "Enter the starting countdown value";
    int limit;
    cin >> limit;
    int i;
    for (i=limit;i;i--){
        cout << "i = " << i << "\n";
    }
    cout << "Done now that i = " << i << "\n";
    return 0;
}