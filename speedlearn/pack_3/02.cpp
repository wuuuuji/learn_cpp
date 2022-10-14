//
// Created by 84019 on 2022/10/14.
//

#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

// ���Բ��ϵ����


void isInCircle(Circle &c, Point &p)
{
    // ��������֮�����
    int distance =
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    // �����۵�ƽ��
    int rDistance = c.getR() * c.getR();

    // �жϹ�ϵ
    if (distance == rDistance)
    {
        cout << "����Բ��" << endl;
    } else if (distance > rDistance)
    {
        cout << "����Բ��" << endl;
    } else
    {
        cout << "����Բ��" << endl;
    }
}

int main()
{
    // ����Բ
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