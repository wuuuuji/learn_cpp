//
// Created by 84019 on 2022/7/7.
//
#include <iostream>

const int FOOT_TO_INCH = 12;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    int height;
    cout<<"Enter your height in inchs_";
    cin>>height;
    cout<<endl<<"Your Height convent to "<<height/FOOT_TO_INCH;
    cout<<" foot and "<<height%FOOT_TO_INCH<<" inch height."<<endl;
    cin.get();
    cin.get();
    return 0;
}
