//
// Created by 84019 on 2022/7/28.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    string first_name, last_name, full_name;
    cout << "Enter your first name: " << endl;
    getline(cin,first_name);
    cout << "Enter your last name: " << endl;
    getline(cin,last_name);

    full_name = last_name + ", " +first_name;
    cout << "Here`s the information in a single: " << full_name << endl;

}