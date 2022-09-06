//
// Created by 84019 on 2022/9/6.
//

#include <iostream>

using namespace std;

struct car_info{
    string manufacturer;  // 生产商
    int data;
};

int main(void)
{
    int car_number;
    car_info * pcar;

    cout << "How many cars do you wish to catalog?";
    cin >> car_number;
    cin.get();  // 消除回车
    pcar = new car_info[car_number];
    for (int i = 0; i < car_number; ++i) {
        cout << "Car #" << i+1 << endl;
        cout << "Please enter the maker: ";
        getline(cin, pcar[i].manufacturer);     //这边是字符串了 有空格
        cout << "Please enter the year made: ";
        cin >> pcar[i].data;    // 这里是整数
        cin.get();
    }

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < car_number; ++i) {
        cout << pcar[i].data << " " << pcar[i].manufacturer << endl;
    }
    return 0;
}