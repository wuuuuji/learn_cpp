//
// Created by 84019 on 2022/7/28.
//

#include <iostream>

using namespace std;

struct Pizza{
    char company[40];
    float diameter;
    float weight;
};

int main(){
    Pizza dinner;
    cout << "Enter the Pizza`s information:" << endl;
    cout << "Pizza`s Company:";
    cin.getline(dinner.company, 40);
    cout << "Pizza`s diameter(inches): ";
    cin >> dinner.diameter;
    cout << "Pizza`s weight(pounds): ";
    cin >> dinner.weight;

    cout << "The lunch pizza is " << dinner.company << "." << endl
         << "And its diameter is " << dinner.diameter
         << " inch, weight is " << dinner.weight << " pounds." << endl;
    return 0;
}