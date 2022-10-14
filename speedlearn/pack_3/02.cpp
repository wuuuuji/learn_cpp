//
// Created by 84019 on 2022/10/14.
//

#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

// 点和圆关系案例


void isInCircle(Circle &c, Point &p)
{
    // 计算两点之间距离
    int distance =
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    // 计算半价的平方
    int rDistance = c.getR() * c.getR();

    // 判断关系
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    } else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    } else
    {
        cout << "点在圆内" << endl;
    }
}

int main()
{
    // 创建圆
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    Point p;
    p.setY(10);
    p.setX(10);

    isInCircle(c,p);
    system("pause");

    return 0;
}