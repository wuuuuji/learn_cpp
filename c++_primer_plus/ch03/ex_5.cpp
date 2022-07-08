//
// Created by 84019 on 2022/7/8.
//

#include <iostream>

using namespace std;

int main()
{
    long long global_amount, american_amount;
    double population_percent;
    cout<<"Enter the World`s population: ";
    cin>>global_amount;
    cout<<endl<<"Enter the population of the US: ";
    cin>>american_amount;
    population_percent = 100* double (american_amount)/double (global_amount);
    cout<<endl<<"The population of the US is "<<population_percent<<"% of the world population.";
    cin.get();
    cin.get();
    return 0;
}