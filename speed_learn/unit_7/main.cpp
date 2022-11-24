#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include "globalFile.h"
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

void LoginIn(string fileName, int type);    // 登录菜单
void managerMenu(Identity * &manager);  // 管理员子菜单


int main() {

    int select = 0;

    while (true)
    {
        cout << "======================  欢迎来到传智播客机房预约系统  ====================="
             << endl;
        cout << endl << "请输入您的身份" << endl;
        cout << "\t\t -------------------------------\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          1.学生代表           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          2.老    师           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          3.管 理 员           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t|          0.退    出           |\n";
        cout << "\t\t|                               |\n";
        cout << "\t\t -------------------------------\n";
        cout << "输入您的选择: ";

        cin >> select; //接受用户选择

        switch (select)
        {
            case 1:  //学生身份
                LoginIn(STUDENT_FILE,1);
                break;
            case 2:  //老师身份
                LoginIn(TEACHER_FILE,2);
                break;
            case 3:  //管理员身份
                LoginIn(ADMIN_FILE,3);
                break;
            case 0:  //退出系统
                cout << "欢迎下一次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "输入有误，请重新选择！" << endl;
                system("pause");
                system("cls");
                break;
        }
    }

    system("pause");
    return 0;
}

// 登录函数
// filename-操作的文件名
// type-登录的身份(1代表学生,2代表老师,3代表管理员)
void LoginIn(string fileName, int type)
{
    Identity * person = NULL;   // 父类的指针
    ifstream ifs;
    ifs.open(fileName, ios::in);    // 读文件

    if(!ifs.is_open())
    {
        cout << "文件不存在" << endl;
        ifs.close();
        return;
    }

    // 准备接受用户信息
    int id = 0;
    string name;
    string pwd;

    // 判断身份
    if (type == 1)  // 学生身份
    {
        cout << "请输入你的学号" << endl;
        cin >> id;
    }
    else if (type == 2) //教师身份
    {
        cout << "请输入你的职工号" << endl;
        cin >> id;
    }

    cout << "请输入用户名：" << endl;
    cin >> name;

    cout << "请输入密码： " << endl;
    cin >> pwd;

    if(type==1){
        // 学生身份验证
        int fId;    // 从文件中读取的id号
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fileName)
        {
            if (id == fId && name == fName && pwd == fPwd)
            {
                cout << "学生验证登录成功!" << endl;
                system("pause");
                system("cls");
                person = new Student(id, name, pwd);

                // 进入子菜单

                return;
            }
        }
    } else if (type==2){
        // 教师身份登录
        int fId;    // 从文件中读取的id号
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fileName)
        {
            if (id == fId && name == fName && pwd == fPwd)
            {
                cout << "教师验证登录成功!" << endl;
                system("pause");
                system("cls");
                person = new Teacher(id,name,pwd);

                // 进入子菜单

                return;
            }
        }
    } else if (type==3){
        // 管理员身份登录
        string fName;
        string fPwd;
        while (ifs >> fName && ifs >> fPwd)
        {
            if (name == fName && pwd == fPwd)
            {
                cout << "管理员验证登录成功!" << endl;
                system("pause");
                system("cls");
                person = new Manager(name,pwd);

                // 进入子菜单
                managerMenu(person);

                return;
            }
        }
    }
    cout << "验证登录失败!" << endl;
    system("pause");
    system("cls");
    return;
}

void managerMenu(Identity * &manager)
{
    while (true)
    {
        // 调用菜单
        manager->operMenu();
        // 将父类的指针转为子类指针，调用子类里其他接口
        Manager * man = (Manager*)manager;
        int select = 0;
        cin >> select;

        if (select == 1)  //添加账号
        {
            cout << "添加账号" << endl;
            man->addPerson();
        }
        else if (select == 2) //查看账号
        {
            cout << "查看账号" << endl;
            man->showPerson();
        }
        else if (select == 3) //查看机房
        {
            cout << "查看机房" << endl;
            man->showComputer();
        }
        else if (select == 4) //清空预约
        {
            cout << "清空预约" << endl;
            man->cleanFile();
        }
        else
        {
            delete manager;
            cout << "注销成功" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}