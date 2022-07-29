//
// Created by 84019 on 2022/7/28.
//

#include <iostream>
#include <array>

using namespace std;

int main(){
    array<float, 3> record_list;
    float average;
    cout << "Enter input three record of 40 miles. \n";
    cout << "First record: " << endl;
    cin >> record_list[0];
    cin.get();
    cout << "Second record: " << endl;
    cin >> record_list[1];
    cin.get();
    cout << "Third record: " << endl;
    cin >> record_list[2];
    cin.get();
    cout << "Your First record is " << record_list[0]
         << ", Second record is " << record_list[1]
         << ", Third record is " << record_list[2]
         << endl;
    average = (record_list[0]+record_list[1]+record_list[2])/3;
    cout << "Your average record is " << average;
    return 0;
}