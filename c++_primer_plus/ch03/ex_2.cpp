//
// Created by 84019 on 2022/7/8.
//

#include <iostream>

const int FOOT_TO_INCH = 12; // 英尺转英寸
const float INCH_TO_METER = 0.0254; //英寸转米
const float KG_TO_LB = 2.2; // 千克转磅

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int height_inch, height_foot;
    float pound, height, weight, BMI;

    cout<<"Enter your height in foot:";
    cin>>height_foot;
    cout<<"Enter your height in inch:";
    cin>>height_inch;
    cout<<"Enter your weight in pound:";
    cin>>pound;
    height = (height_foot*FOOT_TO_INCH+height_inch)*INCH_TO_METER;
    weight = pound/KG_TO_LB;
    BMI = weight / (height*height);
    cout<<"Your BMI is "<<BMI<<endl;
    cin.get();
    cin.get();
    return 0;
}