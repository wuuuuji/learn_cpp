//
// Created by 84019 on 2022/7/18.
//

#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt" << pt << endl;
    return 0;
}