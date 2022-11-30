#include "student.h"

// Ĭ�Ϲ���
Student::Student()
{
}

//�вι���(ѧ�š�����������)
Student::Student(int id, string name, string pwd)
{
    this->m_Id= id;
    this->m_Name = name;
    this->m_Pwd = pwd;

    ifstream ifs;
    ifs.open(COMPUTER_FILE, ios::in);

    ComputerRoom com;
    while (ifs >> com.m_ComId && ifs >> com.m_MaxNum)
    {
        vCom.push_back(com);
    }

    ifs.close();
}

//�˵�����
void Student::operMenu()
{
    cout << "��ӭѧ������" << this->m_Name << "��¼��" << endl;
    cout << "\t\t ----------------------------------\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t|          1.����ԤԼ              |\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t|          2.�鿴�ҵ�ԤԼ          |\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t|          3.�鿴����ԤԼ          |\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t|          4.ȡ��ԤԼ              |\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t|          0.ע����¼              |\n";
    cout << "\t\t|                                 |\n";
    cout << "\t\t ----------------------------------\n";
    cout << "��ѡ�����Ĳ����� " << endl;
}

//����ԤԼ
void Student::applyOrder()
{
    cout << "��������ʱ��Ϊ��һ�����壡" << endl;
    cout << "����������ԤԼ��ʱ�䣺" << endl;
    cout << "1����һ" << endl;
    cout << "2���ܶ�" << endl;
    cout << "3������" << endl;
    cout << "4������" << endl;
    cout << "5������" << endl;

    int date = 0;   // ����
    int interval = 0;   // ʱ���
    int room = 0;   // �������

    while (true)
    {
        cin >> date;
        if (date >= 1 && date <= 5)
        {
            break;
        }
        cout << "������������������" << endl;
    }

    cout << "����������ԤԼʱ���" << endl;
    cout << "1������" << endl;
    cout << "2������" << endl;

    while (true)
    {
        cin >> interval;
        if (interval >= 1 && interval <= 2)
        {
            break;
        }
        cout << "������������������" << endl;
    }

    cout << "��ѡ�����: " << endl;
    for (int i = 0; i < vCom.size(); ++i) {
        cout << vCom[i].m_ComId << "�Ż�������Ϊ: " << vCom[i].m_MaxNum << endl;
    }

    while (true)
    {
        cin >> room;
        if (room >= 1 && room <= 3)
        {
            break;
        }
        cout << "������������������" << endl;
    }
    cout << "ԤԼ�ɹ�! �����" << endl;

    ofstream ofs;
    ofs.open(ORDER_FILE, ios::app);

    ofs << "date:" << date << " ";
    ofs << "interval:" << interval << " ";
    ofs << "stuId:" << this->m_Id << " ";
    ofs << "sutName:" << this->m_Name << " ";
    ofs << "roomId:" << room << " ";
    ofs << "status:" << 1 << endl;

    ofs.close();

    system("pause");
    system("cls");
}

//�鿴�ҵ�ԤԼ
void Student::showMyOrder()
{
    OrderFile of;
}

//�鿴����ԤԼ
void Student::showAllOrder()
{

}

//ȡ��ԤԼ
void Student::cancelOrder()
{

}