//
// Created by 84019 on 2022/9/25.
//

#include <iostream>
#include <cmath>

using namespace std;

struct polar    // 极坐标系
{
    double distance;    // 长度
    double angle;       // 角度
};
struct rect     // 直角坐标系
{
    double x;       // x轴
    double y;       // y轴
};
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main(void)
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next the number (q to quit):";
    }
    cout << "Done.\n";
    return 0;
}

void rect_to_polar(const rect * pxy, polar * pda){

    pda -> distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    /* x的平方加上y的平方开根号 */
    pda ->angle = atan2(pxy->y, pxy->x);
    /* 根据给的值返回一个弧度值 */
}

void show_polar(const polar * pda)
{
    const double Rad_to_deg = 57.29577951;   // 弧度转角度，180/π

    cout << "distance = " << pda->distance
         << ", angle = " << pda->angle * Rad_to_deg << " degrees\n";
}