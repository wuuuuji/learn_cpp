//
// Created by 84019 on 2022/9/8.
//

#include <iostream>
#include <climits>
bool is_int(double );
int main()
{
    using namespace std;
    double num;
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) // 在 num 不可整数时继续
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num); // 强制转换
    cout << "You`ve enter the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
}