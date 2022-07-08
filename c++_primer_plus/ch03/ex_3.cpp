//
// Created by 84019 on 2022/7/8.
//

#include <iostream>

const int DEGREE_TO_MINUTE = 60;
const int MINUTE_TO_SECONDS = 60;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int degrees, minutes, seconds;
    float degrees_style;

    cout<<"Enter a latitude in degrees, minutes, and seconds: \n";
    cout<<"First, enter the degrees: ";
    cin>>degrees;
    cout<<endl<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<endl<<"Finally, enter the seconds of acr: ";
    cin>>seconds;
    degrees_style = degrees+float (minutes) /DEGREE_TO_MINUTE +
                    float (seconds) / (DEGREE_TO_MINUTE*MINUTE_TO_SECONDS);
    cout<<endl<<degrees<<" degrees, "<<minutes<<" degrees, "<<seconds<<" seconds = "<<degrees_style<<" degrees"<<endl;
    cin.get();
    cin.get();
    return 0;
}