//
// Created by 84019 on 2022/8/9.
//

#include <iostream>
int main(){
    using namespace std;
    int n;

    cout << "Enter number in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
    } while (n!=7);
    cout << "Yes, 7 is my favorite number.\n";
    return 0;
}