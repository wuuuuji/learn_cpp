#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

#include "globalFile.h"

class OrderFile
{
public:
    // ���캯��
    OrderFile();

    // ����ԤԼ��¼
    void updateOrder();

    // ��¼ԤԼ����
    int m_Size;

    // ��¼����ԤԼ��Ϣ������
    map<int, map<string,string>> m_orderData;
};