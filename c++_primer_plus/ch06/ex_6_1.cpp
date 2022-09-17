//
// Created by 84019 on 2022/9/16.
//

#include <iostream>
#include <string>

using namespace std;
struct patrons{
    string name;
    double donation;
};

int main(void)
{
    int number;
    patrons *ppatrons;
    bool empty = true;


    cout << "Enter the number of donors:";
    cin >> number;

    ppatrons = new patrons[number];

    for (int i = 0; i < number; i++) {
        cout << "donor #" << i + 1 << ": " << endl;
        cout << "Enter the name of donor: ";
        cin >> ppatrons[i].name;
        cout << "Enter the donation amout: ";
        cin >> ppatrons[i].donation;
    }

    // 捐款的钱数
    cout << "*****Grand Patrons*****" << endl;
    for (int i = 0; i < number; i++) {
        if (ppatrons[i].donation >= 10000){
            cout << ppatrons[i].name << ": " << ppatrons[i].donation << endl;
            empty = false;
        }
    }
    if (empty == true)
        cout << "None" << endl;

    empty = true;

    cout << "*****Patrons*****" << endl;
    for (int i = 0; i < number; i++) {
        if (ppatrons[i].donation < 10000)
        {
            cout << ppatrons[i].name << ": " << ppatrons[i].donation << endl;
            empty = false;
        }
    }
    if (empty == true)
        cout << "None" << endl;
    cin.get();
    cin.get();

    return 0;
}