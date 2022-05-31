//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
int yards(int);

using namespace std;
int main()
{
    cout << "Pick an long" << endl;
    int longs;
    cin >> longs;
    int yard = yards(longs);
    cout << longs << " long equal " << yard << " yards";
    cin.get();
    cin.get();
    return 0;
}
int yards(int n)
{
    return 220 * n;
}