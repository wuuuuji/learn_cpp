//
// Created by 84019 on 2022/9/12.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char automobile[50];    // 汽车的生产商
    int year;       // 汽车生成的年份
    double a_price; // 生产时的价格
    double d_price; // 现在的价格

    ofstream outFile;   // 创建对象输出

    cout << "Enter the make and model of automobile: ";
    cin.get(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = a_price * 0.913;

    // 内容进行显示
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;


    return 0;
}