#include <iostream>

using namespace std;

int main()
{
    int a, temp;
    cin >> a;
    int flag = 0;
    while(a>1)
    {
        if(a%2==0)
        {
            a=a/2;
            flag++;
        }else if(a%2==1)
        {
            temp = (a*3+1)/2;
            a=temp;
            flag++;
        }
    }
    cout << flag;
}