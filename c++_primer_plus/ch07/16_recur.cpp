//
// Created by 84019 on 2022/9/25.
//

#include <iostream>
void countdown(int n);

int main()
{
    countdown(4);
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << "(n ar " << &n << ")" << endl;
    if (n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!" << "(n ar " << &n << ")" << endl;
}