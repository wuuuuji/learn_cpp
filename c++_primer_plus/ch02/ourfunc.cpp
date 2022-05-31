//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
void simon(int);
using namespace std;
int main()
{
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
    cin.get();
    cin.get();
    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl;
}