//
// Created by 84019 on 2022/7/28.
//

#include <iostream>

using namespace std;

struct CandyBar{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "Brand is " << snack.brand << "." << endl
         << "And its weight is " << snack.weight
         << " , calorie is " << snack.calorie << "." << endl;
}