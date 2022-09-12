//
// Created by 84019 on 2022/9/12.
//

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
const int SIZE = 60;

int main()
{
    char filename[SIZE];
    ifstream inFile;

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if(!(inFile.is_open()))   // 打开失败
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.";
        exit(EXIT_FAILURE);
    }
    cout << "Success open the txt file.";

    double value;
    double sum = 0.0;
    int counts = 0;

    while (inFile >> value)
    {
        ++counts;
        sum += value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if (counts == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << counts << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum/counts << endl;
    }
    inFile.close();
    return 0;
}