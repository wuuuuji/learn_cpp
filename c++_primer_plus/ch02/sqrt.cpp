//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
#include <cmath>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    double area;
    cout << "Enter the floor area, in square feet, of you home: " << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That`s the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}