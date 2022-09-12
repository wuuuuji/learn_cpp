//
// Created by 84019 on 2022/9/12.
//

#include <iostream>     // ostream->cout    istream->cin
#include <fstream>      // ofstream         ifstream
//1.声明fstream

using namespace std;

int main()
{
    char automobile[50];    // 汽车的生产商
    int year;       // 汽车生成的年份
    double a_price; // 生产时的价格
    double d_price; // 现在的价格

    ofstream outFile;   // 2.创建对象,输出流
    outFile.open("carinfo.txt");     // 3.关联一个文件

    cout << "Enter the make and model of automobile: ";
    cin.get(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = a_price * 0.913;

    // 内容进行显示
    cout << fixed;  // 显示不要以科学技术法的显示，以小数点来显示
    cout.precision(2);  // 输出到小数点后2位
    cout.setf(ios_base::showpoint); // 零也输出,不省略
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // 使用outFile替代输出做同样的输出过程
    outFile << fixed;  // 显示不要以科学技术法的显示，以小数点来显示
    outFile.precision(2);  // 输出到小数点后2位
    outFile.setf(ios_base::showpoint); // 零也输出,不省略
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();    // 关闭打开的文件
    return 0;
}