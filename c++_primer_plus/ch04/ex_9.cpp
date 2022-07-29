//
// Created by 84019 on 2022/7/28.
//

#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(){
    CandyBar *snack = new CandyBar[3];

    strcpy(snack[0].brand, "Mocha Munch");
    snack[0].weight = 2.3;
    snack[0].calorie = 350;

    strcpy(snack[1].brand, "Hershey");
    (snack+1)->weight = 4.2;
    (snack+1)->calorie = 550;

    strcpy(snack[2].brand, "Musketeers");
    snack[2].weight = 2.6;
    snack[2].calorie = 430;

    cout << "My 1st CandyBar is " << snack[0].brand << "." << endl
         << "And its weight is " << snack[0].weight
         << ", calorie is " << snack[0].calorie << "." << endl;
    cout << "My 2st CandyBar is " << snack[1].brand << "." << endl
         << "And its weight is " << snack[1].weight
         << ", calorie is " << snack[1].calorie << "." << endl;
    cout << "My 3st CandyBar is " << snack[2].brand << "." << endl
         << "And its weight is " << snack[2].weight
         << ", calorie is " << snack[2].calorie << "." << endl;
    delete [] snack;
    return 0;
}