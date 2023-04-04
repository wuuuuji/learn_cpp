#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    cin >> n;
    register int i=0,sum=0,size=n.size();
    string res[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    for (; i < size; ++i) {
        sum+=n[i]-'0';
    }
    string num = to_string(sum);
    for (int j = 0; j < num.size(); ++j) {
        if(j!=0)
        {
            cout << " ";
        }
        cout << res[num[j] - '0'];
    }
    return 0;
}