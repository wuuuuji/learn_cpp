//
// Created by 84019 on 2022/9/14.
//

#include <iostream>

using namespace std;
const int strsize = 40;
const int usersize = 5;

struct bop {
    char fullname[strsize];     // 真正的名字
    char title[strsize];        // 职称
    char bopname[strsize];      // 秘密名称
    int preference;             // 0=真正的名字，1=职称，3=秘密名称
};
bop bop_user[usersize] =
        {{"Wimp Macho", "Engineer", "STAR", 0},
         {"Raki Rhodes", "Junior Programmer", "SUN", 1},
         {"Celia Laiter", "Broker", "MIPS", 2},
         {"Hoppy Hipman", "Analyst Trainee", "MAGIC", 1},
         {"Pat Hand", "Electrician", "LOOPY", 2}};
void showmenu();
void print_by_fullname(void);
void print_by_title(void);
void print_by_bopname(void);
void print_by_preference(void);

int main()
{
    char input;
    showmenu();
    cin.get(input);
    while (input != 'q'){
        switch (input) {
            case 'a':
                print_by_fullname();
                break;
            case 'b':
                print_by_title();
                break;
            case 'c':
                print_by_bopname();
                break;
            case 'd':
                print_by_preference();
                break;
            default:
                cout << "Please enter character a, b, c, d, q:" << endl;
        }
        cin.get();
        cout << "Next input: ";
        cin.get(input);
    }
    cout << "Bye!";
    return 0;
}

void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name     b. display by title\n"
            "c. display by bopname  c. display bt preference\n"
            "q. quit\n";
}

void print_by_fullname(void)
{
    for (int i = 0; i < usersize; ++i) {
        cout << bop_user[i].fullname << endl;
    }
}

void print_by_title(void)
{
    for (int i = 0; i < usersize; ++i) {
        cout << bop_user[i].title << endl;
    }
}

void print_by_bopname(void)
{
    for (int i = 0; i < usersize; ++i) {
        cout << bop_user[i].bopname << endl;
    }
}

void print_by_preference(void)
{
    for (int i = 0; i < usersize; ++i) {
        switch (bop_user[i].preference) {
            case 0:
                cout << bop_user[i].fullname << endl;
                break;
            case 1:
                cout << bop_user[i].title << endl;
                break;
            case 2:
                cout << bop_user[i].bopname << endl;
                break;
        }
    }
}