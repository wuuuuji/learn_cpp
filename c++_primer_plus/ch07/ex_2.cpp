//
// Created by 84019 on 2022/10/7.
//

#include <iostream>

using namespace std;
const int MAX = 10;
int fill_golf(double arr[], int size);
void show_golf(double arr[], int n);
double average_golf(double arr[], int n);



int main()
{
    double golf[MAX];

    int size = fill_golf(golf, MAX);
    if(size > 0)
    {
        show_golf(golf, size);
        cout << "Average : " << average_golf(golf, size) << endl;
    }
    else
        cout << "There is no scores!" << endl;

    return 0;
}

int fill_golf(double arr[], int size)
{
    cout << "Please enter you golf results:" << endl;
    double temp;
    int i = 0;
    do {
        cout << "Enter golf result, No." << i + 1 << ": ";
        cin >> temp;
        if(!cin){
            cin.clear();
            while (cin.get() != '\n')
                cout << "Invalid input, terminate." << endl;
            break;
        }else if (temp < 0){
            break;
        }else{
            arr[i++] = temp;
        }
    } while (i < size);
    return i;
}

void show_golf(double arr[], int n)
{
    cout << "golf result :";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

double average_golf(double arr[], int n)
{
    double average, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / n;
    return average;
}