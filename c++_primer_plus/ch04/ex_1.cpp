//
// Created by 84019 on 2022/7/26.
//

#include <iostream>

using namespace std;
int main(){
    char first_name[20], last_name[20];
    char grade;
    unsigned int age;
    cout << "What is your first name?" << endl;
    cin.getline(first_name, 20);
    cout << "What is your last name?" << endl;
    cin >> last_name;
    cout << "What letter grade do you deserve?" << endl;
    cin >> grade;
    cout << "What is your age?" << endl;
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade+1) << endl;
    cout << "Age: " << age << endl;
    cin.get();
    cin.get();
}