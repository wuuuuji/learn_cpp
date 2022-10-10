//
// Created by 84019 on 2022/10/10.
//

#include <iostream>

using namespace std;
double add(double x, double y);
double subtract(double x, double y);
double calculate(double x ,double y ,double(*pf)(double x ,double y) );


int main()
{
    double q = calculate(2.5, 10.4, add);
    cout << "The Answer of add is " << q << endl;
    double t = calculate(2.5, 10.4, subtract);
    cout << "The Answer of subtract is " << t << endl;
    return 0;
}

double add(double x, double y)
{
    return x+y;
}

double subtract(double x, double y)
{
    return x-y;
}

double calculate(double x ,double y ,double(*pf)(double x ,double y))
{
    return pf(x,y);
}