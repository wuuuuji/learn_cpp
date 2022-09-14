//
// Created by 84019 on 2022/9/14.
//

#include <iostream>

using namespace std;
void showmenu();

int main()
{
    showmenu();
    char choice;
    cin.get(choice);
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cin.get();
        cout << "Please enter a c, p, t, or g: ";
        cin.get(choice);
    }
    switch (choice) {
        case 'c':
            cout << "A maple is a carnivore";
            break;
        case 'p':
            cout << "A maple is a pianist";
            break;
        case 't':
            cout << "A maple is a tree";
            break;
        case 'g':
            cout << "A maple is a game";
            break;
    }

}

void showmenu(){
    cout << "Please enter one of the following choices:\n"
            "c) carnivore       p) pianist\n"
            "t) tree            g) game\n";
}