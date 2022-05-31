//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
float convert(float f);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    float c_degree, f_degree;

    cout << "Please enter a Celsius value: ";
    cin >> c_degree;
    f_degree = convert(c_degree);
    cout << c_degree << " degrees Celsius is ";
    cout << f_degree << " degrees Fahrenheit." << endl;
    return 0;
}
float convert(float f){
    float temp = f*1.8 + 32;
    return temp;
}