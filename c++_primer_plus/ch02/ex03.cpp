//
// Created by 84019 on 2022/5/30.
//
#include <iostream>
void mice();
void run();
using std::cout;
using std::endl;
using std::cin;

int main()
{
    mice();
    mice();
    run();
    run();
    cin.get();
    cin.get();
}
void mice()
{
    cout << "Three blind mice" << endl;
}
void run()
{
    cout << "See how they run" << endl;
}