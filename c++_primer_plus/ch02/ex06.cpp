//
// Created by 84019 on 2022/5/31.
//
#include <iostream>

double convert(double year);

using std::cout;
using std::endl;
using std::cin;

int main(){
    double astro_unit, light_year;
    cout << "Please enter a Celsius value: " << endl;
    cin >> light_year;
    astro_unit = convert(light_year);
    cout << light_year << " light years = " << astro_unit << " astronomical units.";
    cin.get();
    cin.get();
}

double convert(double year) {
    double temp = year*63240;
    return temp;
}