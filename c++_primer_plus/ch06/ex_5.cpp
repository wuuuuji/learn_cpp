//
// Created by 84019 on 2022/9/15.
//

#include <iostream>

using namespace std;
void tax_calculate(long input);

int main(){
    long input;
    cout << "Please enter your income:";
    while (cin >> input && input > 0)
    {
        tax_calculate(input);
        cout << "Please enter your income:";
    }
    cout << "Bye!" << endl;
    return 0;
}

void tax_calculate(long input){
    double tax=0.00;
    if (input<=5000){
        cout << "You don`t need pay any tax" << endl;
    } else if (input >= 5001 && input <= 15000){
        tax = (input-5000)*0.10;
        cout << "You need pay " << tax <<" tvarp." << endl;
    } else if (input >= 15001 && input <= 35000){
        tax = (10000*0.10) + ((input-15000)*0.15);
        cout << "You need pay " << tax <<" tvarp." << endl;
    } else if (input >= 35001 ){
        tax = (10000*0.10) + (20000*0.15) + ((input-35000)*0.20);
        cout << fixed;      // 不要以科学技术法显示
        cout.precision(2);      // 输出小数点后两位
        cout.setf(ios_base::showpoint);    // 零也输出
        cout << "You need pay " << tax <<" tvarp." << endl;
    }

}