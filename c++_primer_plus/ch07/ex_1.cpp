//
// Created by 84019 on 2022/10/7.
//
#include <iostream>

using namespace std;

double harmonic(double x, double y);


int main()
{
    double input_num1, input_num2;
    cout << "Enter the two number: " << endl;
    cin >> input_num1 >> input_num2;
    while (input_num1 != 0 && input_num2 != 0)
    {
        cout << "The " << input_num1 << " and " << input_num2
             << " harmonic mean is " << harmonic(input_num1, input_num2) << endl;
        cout << "Enter the two number: " << endl;
        cin >> input_num1 >> input_num2;
    }

    return 0;
}

double harmonic(double x, double y)
{
    double result = 2.0*x*y/(x+y);
    return result;
}
