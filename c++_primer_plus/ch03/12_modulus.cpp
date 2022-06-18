//
// Created by 84019 on 2022/6/18.
//
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;  // whole stone
    int pounds = lbs %  Lbs_per_stn;    // remainder in pounds
    cout << lbs << " pounds are " << stone << " stone, " << pounds << "pound(s).\n";

    cin.get();
    cin.get();
    return 0;

}
