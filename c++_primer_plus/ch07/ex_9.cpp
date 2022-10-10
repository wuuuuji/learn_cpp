//
// Created by 84019 on 2022/10/9.
//

#include <iostream>

using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1 (student st);
void display2 (const student *ps);
void display3 (const student pa[], int n);

int main()
{
    cout << "Enter the class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < class_size; i++) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0;i < n ; i++){
        cout << "Enter the info of student name: ";
        cin >> pa[i].fullname;
        cout << "Enter the info of student hobby: ";
        cin >> pa[i].hobby;
        cout << "Enter the info of student level: ";
        cin >> pa[i].ooplevel;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input: input process terminated." << endl;
            break;
        }
    }
    return i;
}

void display1 (student st)
{

}

void display2 (const student *ps)
{

}

void display3 (const student pa[], int n)
{

}