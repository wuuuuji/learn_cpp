#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "globalFile.h"
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

void LoginIn(string fileName, int type);    // ��¼�˵�
void managerMenu(Identity * &manager);  // ����Ա�Ӳ˵�


int main() {

    int select = 0;

    while (true)
    {
        cout << "======================  ��ӭ�������ǲ��ͻ���ԤԼϵͳ  ====================="
             << endl;
        cout << endl << "�������������" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          1.ѧ������           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          2.��    ʦ           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          3.�� �� Ա           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          0.��    ��           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "��������ѡ��: ";

        cin >> select; //�����û�ѡ��

        switch (select)
        {
            case 1:  //ѧ�����
                LoginIn(STUDENT_FILE,1);
                break;
            case 2:  //��ʦ���
                LoginIn(TEACHER_FILE,2);
                break;
            case 3:  //����Ա���
                LoginIn(ADMIN_FILE,3);
                break;
            case 0:  //�˳�ϵͳ
                cout << "��ӭ��һ��ʹ��" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "��������������ѡ��" << endl;
                system("pause");
                system("cls");
                break;
        }
    }

    system("pause");
    return 0;
}

// ��¼����
// filename-�������ļ���
// type-��¼�����(1����ѧ��,2������ʦ,3�������Ա)
void LoginIn(string fileName, int type)
{
    Identity * person = NULL;   // �����ָ��
    ifstream ifs;
    ifs.open(fileName, ios::in);    // ���ļ�

    if(!ifs.is_open())
    {
        cout << "�ļ�������" << endl;
        ifs.close();
        return;
    }

    // ׼�������û���Ϣ
    int id = 0;
    string name;
    string pwd;

    // �ж����
    if (type == 1)  // ѧ�����
    {
        cout << "���������ѧ��" << endl;
        cin >> id;
    }
    else if (type == 2) //��ʦ���
    {
        cout << "���������ְ����" << endl;
        cin >> id;
    }

    cout << "�������û�����" << endl;
    cin >> name;

    cout << "���������룺 " << endl;
    cin >> pwd;

    if(type==1){
        // ѧ�������֤
        int fId;    // ���ļ��ж�ȡ��id��
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fileName)
        {
            if (id == fId && name == fName && pwd == fPwd)
            {
                cout << "ѧ����֤��¼�ɹ�!" << endl;
                system("pause");
                system("cls");
                person = new Student(id, name, pwd);

                // �����Ӳ˵�

                return;
            }
        }
    } else if (type==2){
        // ��ʦ��ݵ�¼
        int fId;    // ���ļ��ж�ȡ��id��
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fileName)
        {
            if (id == fId && name == fName && pwd == fPwd)
            {
                cout << "��ʦ��֤��¼�ɹ�!" << endl;
                system("pause");
                system("cls");
                person = new Teacher(id,name,pwd);

                // �����Ӳ˵�

                return;
            }
        }
    } else if (type==3){
        // ����Ա��ݵ�¼
        string fName;
        string fPwd;
        while (ifs >> fName && ifs >> fPwd)
        {
            if (name == fName && pwd == fPwd)
            {
                cout << "����Ա��֤��¼�ɹ�!" << endl;
                system("pause");
                system("cls");
                person = new Manager(name,pwd);

                // �����Ӳ˵�
                managerMenu(person);

                return;
            }
        }
    }
    cout << "��֤��¼ʧ��!" << endl;
    system("pause");
    system("cls");
    return;
}

void managerMenu(Identity * &manager)
{
    while (true)
    {
        // ���ò˵�
        manager->operMenu();
        // �������ָ��תΪ����ָ�룬���������������ӿ�
        Manager * man = (Manager*)manager;
        int select = 0;
        cin >> select;

        if (select == 1)  //����˺�
        {
            cout << "����˺�" << endl;
            man->addPerson();
        }
        else if (select == 2) //�鿴�˺�
        {
            cout << "�鿴�˺�" << endl;
            man->showPerson();
        }
        else if (select == 3) //�鿴����
        {
            cout << "�鿴����" << endl;
            man->showComputer();
        }
        else if (select == 4) //���ԤԼ
        {
            cout << "���ԤԼ" << endl;
            man->cleanFile();
        }
        else
        {
            delete manager;
            cout << "ע���ɹ�" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}