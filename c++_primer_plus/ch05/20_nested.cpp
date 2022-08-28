//
// Created by 84019 on 2022/8/14.
//

#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char *cities[Cities] = {
           "Gribble City",
           "Gribble town",
           "New Gribble",
           "San Gribble",
           "Gribble Vista"
    };
    int maxtepms[Years][Cities] = {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
    };
    cout << "Maximum temperatures for 2008 - 2011 \n\n";
    for (int city = 0; city < Cities; ++city){
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year) {
            cout << maxtepms[year][city] << "\t";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}