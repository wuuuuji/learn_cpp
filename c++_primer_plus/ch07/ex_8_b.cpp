//
// Created by 84019 on 2022/10/9.
//

#include <iostream>

using namespace std;

const int Seasons = 4;
const char * Snames[] = {
        "spring","Summer","Fall","Winter"
};
struct Spend
{
    double money[Seasons];
};

void fill(double arr[], int size);
void show(const double arr[], int size);


int main(void)
{
    Spend expenses;
    fill(expenses.money, Seasons);
    show(expenses.money, Seasons);
    return 0;
}

void fill(double arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> arr[i];
    }
}

void show(const double arr[], int size)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < size; i++) {
        cout << Snames[i] << ": $" << arr[i] << endl;
        total += arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}