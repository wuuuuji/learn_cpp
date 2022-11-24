#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#include "identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"

class Manager:public Identity
{
public:
    //Ĭ�Ϲ���
    Manager();

    //�вι���  ����Ա����������
    Manager(string name, string pwd);

    //ѡ��˵�
    virtual void operMenu();

    //����˺�
    void addPerson();

    //�鿴�˺�
    void showPerson();

    //�鿴������Ϣ
    void showComputer();

    //���ԤԼ��¼
    void cleanFile();

    // ��ʼ������
    void initVector();

    // ����ظ� ����:(����id����������) ����ֵ��(true �������ظ���false����û���ظ�)
    bool checkRepeat(int id, int type);

    // ѧ������
    vector<Student> vStu;

    // ��ʦ����
    vector<Teacher> vTea;

    // ������Ϣ����
    vector<ComputerRoom> vCom;
};