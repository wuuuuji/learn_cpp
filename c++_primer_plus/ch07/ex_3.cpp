//
// Created by 84019 on 2022/10/7.
//

#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float weight;
    float length;
    float volume;
};
void display(box);
void calc_volume(box *);

int main()
{
    box Orange  = {"Chine", 12, 12, 12, 0};
    calc_volume(&Orange);
    display(Orange);
    return 0;
}

void calc_volume(box * a)
{
    a->volume = a->height * a->weight * a->length;
}


void display(box a)
{
    cout << "maker : " << a.maker << endl
         << " height : " << a.height << endl
         << " weight : " << a.weight << endl
         << " length : " << a.length << endl
         << " volume : " << a.volume << endl;
}