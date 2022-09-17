//
// Created by 84019 on 2022/9/17.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct patrons{
    string name;
    double donation;
};

int main(void)
{
    ifstream inFile;
    string filename;

    int number;
    patrons *ppatrons;
    bool empty = true;
    int i;  // 控制结构体访问的数组

    cout << "Enter the file name:";
    getline(cin,filename);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Failed to open the file!" << endl;
        exit(EXIT_FAILURE);
    }

    inFile >> number;
    if (number <= 0)
        exit(EXIT_FAILURE);

    ppatrons = new patrons[number];

    inFile.get();

    while ((!inFile.eof()) && (i <number)) {
        getline(inFile, ppatrons[i].name);
        cout << "Read name: " << ppatrons[i].name << endl;
        inFile >> ppatrons[i].donation;
        cout << "Donation: " << ppatrons[i].donation << endl;
        i++;
        inFile.get();
    }

    // 捐款的钱数s
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
    return 0;
}