//
// Created by 84019 on 2022/9/13.
//

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double,10>donation;
    double input;
    int counter = 0;
    double sum = 0.0;
    double average;
    int bigger=0;

    cout << "Please enter the double numeral: ";
    while ((cin >> input) && (counter<10)){
        donation[counter++] = input;
        if (counter == 10)
            break;
        cout << "Please enter the double numeral: ";
    }
    for (int i = 0; i < counter; ++i) {
        sum += donation[i];
    }
    average = sum / counter;
    for (int i = 0; i < counter; i++) {
        if (donation[i] > average)
        {
            bigger++;
        }
    }
    cout << "Average is " << average << endl;
    cout << bigger << " number are bigger than average." << endl;
    cin.get();
    cin.get();
    return 0;
}