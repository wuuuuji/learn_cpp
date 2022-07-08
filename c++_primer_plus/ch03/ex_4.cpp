//
// Created by 84019 on 2022/7/8.
//

#include <iostream>

using namespace std;
const int DAYS_TO_HOURS = 24;
const int HOURS_TO_MINUTE = 60;
const int MINUTES_TO_SECONDS = 60;

int main()
{
    long long seconds,days;
    int  hours, minutes;

    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    cout<<seconds<<" seconds = ";
    days = seconds / (DAYS_TO_HOURS*HOURS_TO_MINUTE*MINUTES_TO_SECONDS);
    seconds = seconds % (DAYS_TO_HOURS*HOURS_TO_MINUTE*MINUTES_TO_SECONDS);

    hours = seconds / (HOURS_TO_MINUTE*MINUTES_TO_SECONDS);
    seconds = seconds % (HOURS_TO_MINUTE*MINUTES_TO_SECONDS);

    minutes = seconds / MINUTES_TO_SECONDS;
    seconds = seconds % MINUTES_TO_SECONDS;

    cout<<days<<" days,"
    <<hours<<" hours,"
    <<minutes<<" minutes,"
    <<seconds<<" seconds";


    return 0;
}
