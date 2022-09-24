//
// Created by 84019 on 2022/9/21.
//

#include <iostream>

long double probability(unsigned numbers, unsigned p从icks);

int main()
{
    using namespace std;
    double total, choices;
    cout << "请输入你抽取卡片的总数和能够抽取的次数： \n";
    while ((cin >> total >> choices) && (choices <= total))
    {
        cout << fixed;
        cout.precision(0);
        cout.setf(ios_base::showpoint);
        cout << "你有一次机会在" << probability(total, choices) << "次中获奖。" << endl;
        cout<<"接着输入下一组的两个数（输入q即可停止）:\n";
    }
    cout<<"结束了！Bye-Bye！"<<endl;
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--) {
        result  = result * n/p;
    }
    return result;
}
