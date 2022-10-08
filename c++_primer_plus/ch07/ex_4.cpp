//
// Created by 84019 on 2022/10/8.
//

#include <iostream>

using namespace std;

long double probability(double fnumbers, double snumbers, double pricks);


int main()
{
    cout << "Field number is 45 , and special number is 27 ." << endl;
    cout << "the probability is one of the: " << probability(45, 27, 5) << endl;
    return 0;
}

long double probability(double fnumbers, double snumbers, double pricks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = fnumbers, p = pricks; p > 0; n--, p--)
    {
        result = result *n /p;
    }
    return result /= snumbers;
}