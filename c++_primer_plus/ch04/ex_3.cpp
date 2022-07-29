//
// Created by 84019 on 2022/7/27.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    const int SIZE = 20;
    char first_name[SIZE], last_name[SIZE];
    char full_name[SIZE*2];
    cout << "Enter your first name: " << endl;
    cin.getline(first_name, SIZE);
    cout << "Enter your last name: " << endl;
    cin.getline(last_name, SIZE);

    strcpy(full_name, first_name);
    strcat(full_name, ", ");
    strcat(full_name, last_name);
    cout << "Here`s the information in a single: " << full_name << endl;
    return 0;
}