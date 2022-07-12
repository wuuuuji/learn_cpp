//
// Created by 84019 on 2022/7/12.
//

#include <iostream>
struct inflatable   // structure declaration 结构声明
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable gueet = {
            "Glorlous Gloria",
            1.88,
            29.99
    };
    inflatable pal= {
            "Audacious Arthur",
            3.12,
            32.99
    };
    cout << "Expand your guest list with " << gueet.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << gueet.price + pal.price << "!\n";
    return 0;
}