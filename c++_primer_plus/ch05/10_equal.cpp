//
// Created by 84019 on 2022/8/5.
//

#include <iostream>
int main(){
    using namespace std;
    int arr[10] =
            {20, 20, 20, 20, 20, 19, 20, 18, 20 ,20};

    cout << "Ding it right\n";
    int i;
    for (i = 0; arr[i] == 20; i++) {
        cout << "arr " << i << " is a 20\n";
    }
    cout << "Doing it dangerously wrong:\n";
    // 出错，无限循环
    for (i = 0; arr[i] = 20; i++) {
        cout << "arr " << i << " is a 20\n";
    }
    return 0;
}