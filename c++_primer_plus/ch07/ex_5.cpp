//
// Created by 84019 on 2022/10/8.
//

#include <iostream>

using namespace std;
long long factorial(int n);


int main()
{
    int n;
    cout << "Enter a number to calc factorial: ";
    cin >> n;
    while (n > 0)
    {
        cout << n << "! = " << factorial(n) << endl;
        cout << "Enter a number to calc factorial: ";
        cin >> n;
    }
    cout << "Done!" << endl;
    return 0;
}

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}