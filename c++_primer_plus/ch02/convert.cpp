//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
int stonetolb(int);
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}
int stonetolb(int sts)
{
    return 14 * sts;
}
