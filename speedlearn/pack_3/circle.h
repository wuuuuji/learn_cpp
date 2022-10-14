//
// Created by 84019 on 2022/10/14.
//

#define once
#include <iostream>
#include "point.h"

using namespace std;

class Circle
{
public:
    void setR(int r);

    int getR();

    void setCenter(Point center);

    Point getCenter();

private:
    int m_R;
    Point m_Center;
};
