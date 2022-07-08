//
// Created by 84019 on 2022/7/8.
//

#include <iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    float distance_in_mile, distance_in_km; // 距离的单位(英里/公里)
    float fuel_in_gallon, fuel_in_litre;    // 汽油的单位(加仑/升)
    float fuel_consume;

    /*计算英式油耗*/
    cout<<"Enter the distance in miles: ";
    cin>>distance_in_mile;
    cout<<"Enter the fuel consume in gallon: ";
    cin>>fuel_in_gallon;
    fuel_consume = distance_in_mile / fuel_in_gallon;
    cout<<"The fuel consume is "<<fuel_consume<<" mpg(miles/gallon)."<<endl;

    /*计算欧式油耗*/
    cout<<"Enter the distance in kilometer: ";
    cin>>distance_in_km;
    cout<<"Enter the fuel consume in litre: ";
    cin>>fuel_in_litre;
    fuel_consume = (distance_in_km / fuel_in_litre)*100;
    cout<<"The fuel consume is "<<fuel_consume<<"L/100KM."<<endl;
    cin.get();
    cin.get();
    return 0;
}