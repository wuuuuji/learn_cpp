//
// Created by 84019 on 2022/7/21.
//

#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable *ps = new inflatable;    // 为结构体分配内存
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);      // 第一种方法去分配内存
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;            // 第二方法去分配内存
    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;     // 第二种方法
    cout << "Volume: " << ps->volume << " cubic,feet\n";    // 第一种方法
    cout << "Price: $" << ps->price << endl;    // 第一种方法
    delete ps;

    return 0;
}