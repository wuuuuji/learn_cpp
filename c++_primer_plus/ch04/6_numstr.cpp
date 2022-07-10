//
// Created by 84019 on 2022/7/10.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    // (cin >> year).get()
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}