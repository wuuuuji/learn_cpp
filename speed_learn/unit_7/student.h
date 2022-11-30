#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

#include "Identity.h"
#include "computerRoom.h"
#include "globalFile.h"
#include "orderFile.h"

class Student:public Identity
{
public:
    // Ĭ�Ϲ���
    Student();

    // �вι���(ѧ�š�����������)
    Student(int id, string name,string pwd);

    // �˵�����
    virtual void operMenu();

    //����ԤԼ
    void applyOrder();

    //�鿴�ҵ�ԤԼ
    void showMyOrder();

    //�鿴����ԤԼ
    void showAllOrder();

    //ȡ��ԤԼ
    void cancelOrder();

    //ѧ��ѧ��
    int m_Id;

    // ��������
    vector<ComputerRoom> vCom;
};