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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(void)
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next the number (q to quit):";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos){
    polar anwer;

    anwer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    /* x的平方加上y的平方开根号 */
    anwer.angle = atan2(xypos.y, xypos.x);
    /* 根据给的值返回一个弧度值 */
    return anwer;
}

void show_polar(polar dapos)
{
    const double Rad_to_deg = 57.29577951;   // 弧度转角度，180/π

    cout << "distance = " << dapos.distance
         << ", angle = " << dapos.angle * Rad_to_deg << " degrees\n";
}