//
// Created by 84019 on 2022/10/11.
//

#include <iostream>

using namespace std;

class Cube
{
public:
    // ��
    void setL(int l)
    {
        m_L = l;
    }
    int getL()
    {
        return m_L;
    }

    // ��
    void setW(int w)
    {
        m_W = w;
    }
    int getW()
    {
        return m_W;
    }

    // ��
    void setH(int h)
    {
        m_H = h;
    }
    int getH()
    {
        return m_H;
    }

    // ��ȡ���������
    int calculateS()
    {
        return 2*m_L*m_W + 2*m_H*m_W + 2*m_L*m_H;
    }

    int calculateV()
    {
        return m_H*m_W*m_L;
    }

    bool isSameByClass(Cube &c)
    {
        if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
        {
            return true;
        }
        return false;
    }

private:
    int m_L;    // ��
    int m_W;    // ��
    int m_H;    // ��

};

bool  isSame(Cube &c1, Cube& c2);


int main()
{
    Cube c1;
    c1.setL(10);
    c1.setH(10);
    c1.setW(10);

    cout << "c1�����Ϊ: " << c1.calculateS() << endl;
    cout << "c1�����Ϊ: " << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setH(10);
    c2.setW(10);

    bool ret = isSame(c1, c2);
    if (ret)
    {
        cout << "c1��c2����ȵ�" << endl;
    } else
    {
        cout << "c1��c2�ǲ���ȵ�" << endl;
    }

    // ���ó�Ա�����ж�
    ret = c1.isSameByClass(c2);
    if (ret)
    {
        cout << "��Ա�����ж�: c1��c2����ȵ�" << endl;
    } else
    {
        cout << "��Ա�����ж�: c1��c2�ǲ���ȵ�" << endl;
    }

    system("pause");


    return 0;
}

bool  isSame(Cube &c1, Cube& c2)
{
    if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
    {
        return true;
    }
    return false;
}