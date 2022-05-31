//
// Created by 84019 on 2022/5/31.
//
#include <iostream>

void format_number(float hour, float minute);

using std::cout;
using std::endl;
using std::cin;

int main(){
    float hours, minutes;
    cout << "Enter the number of hours:  ";
    cin >> hours;
    cout << endl;
    cout << "Enter the number of minutes:  ";
    cin >> minutes;
    format_number(hours, minutes);
}

void format_number(float hour, float minute){
    cout << "Time: " << hour <<":" << minute;
}
