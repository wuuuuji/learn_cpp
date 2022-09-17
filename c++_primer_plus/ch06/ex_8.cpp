//
// Created by 84019 on 2022/9/17.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    string filename;
    ifstream inFile;
    char ch;
    int count=0;

    cout << "Enter name of data file: ";
    getline(cin, filename);
    inFile.open(filename);
    if(!(inFile.is_open()))
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.";
        exit(EXIT_FAILURE);
    }
    cout << "Success open the txt file." << endl;

    while (!inFile.eof())
    {
         inFile >> ch;
         count++;
    }
    cout << filename << " has " << count << " characters." << endl;
    inFile.close();

    cin.get();
    cin.get();
    return 0;
}