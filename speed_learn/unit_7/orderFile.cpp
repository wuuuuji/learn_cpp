//
// Created by 84019 on 2022/11/29.
//

#include "orderFile.h"

void MapAddDate(map<string,string> *m, string date)
{
    string key;
    string value;

    int pos = date.find(":");
    if (pos !=-1)
    {
        key = date.substr(0,pos);
        value = date.substr(pos+1,date.size()-pos-1);

        m->insert(make_pair(key,value));
    }
}

OrderFile::OrderFile()
{
    ifstream ifs;
    ifs.open(ORDER_FILE, ios::in);

    string date;        // ����
    string interval;    // ʱ���
    string stuId;       // ѧ�����
    string stuName;     // ѧ������
    string roomId;      // �������
    string status;      // ԤԼ״̬

    this->m_Size = 0;   // ��¼����

    while (ifs >> date && ifs >>interval &&
           ifs >> stuId && ifs >> stuName &&
           ifs >> roomId && ifs >> status)
    {
        /*cout << date << endl;
        cout << interval << endl;
        cout << stuId << endl;
        cout << stuName << endl;
        cout << roomId << endl;
        cout << status << endl;
        cout << endl;*/
        string key;
        string value;

        map<string,string> m;
        MapAddDate(&m,date);
        MapAddDate(&m,interval);
        MapAddDate(&m,stuId);
        MapAddDate(&m,stuName);
        MapAddDate(&m,roomId);
        MapAddDate(&m,status);

        this->m_orderData.insert(make_pair(this->m_Size,m));
        this->m_Size++;

    }
    ifs.close();

    /*// �������map����
    for (map<int,map<string,string>>::iterator it = m_orderData.begin();it!=m_orderData.end();it++) {
        cout << "����Ϊ = " << it->first << " value = " << endl;
        for (map<string,string>::iterator mit = (*it).second.begin();mit!=it->second.end();mit++) {
            cout << "key = " << mit->first << " value = " << mit->second << endl;
        }
    }*/
}

void OrderFile::updateOrder() {
    if (this->m_Size == 0)
    {
        return; //ԤԼ��¼Ϊ0��ֱ��return
    }

    ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
    for (int i = 0; i < m_Size; ++i) {
        ofs << "date: " << this->m_orderData[i]["date"] << " ";
        ofs << "interval: " << this->m_orderData[i]["interval"] << " ";
        ofs << "stuId: " << this->m_orderData[i]["stuId"] << " ";
        ofs << "stuName: " << this->m_orderData[i]["stuName"] << " ";
        ofs << "roomId: " << this->m_orderData[i]["roomId"] << " ";
        ofs << "status: " << this->m_orderData[i]["status"] << endl;
    }

    ofs.close();
}
