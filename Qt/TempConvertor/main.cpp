#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class BadStone
{
    int err;
public:
    int sign (int err)
    {
        switch(err)
        {
            case -1:
                cerr << "����������� ���� 0 �������� ��������." << endl;
            break;
        }
        return -100;
    }
};

double ctok(double c)
{
    if(c < -273.15) throw BadStone().sign(-1);
    double k = c + 273.15;
    return k;
}

double ctof (double c)
{
    double f = (9.0/5) * c + 32;
    return f;
}

int main(int argc, char *argv[])
{
    try
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        double c = 0;
        cout << "������� ����������� � �������� �������: ";
        cin >> c;
        double f = ctof(c);

        cout << "����������� � �������� ����������: " << f << endl;
    }
    catch (BadStone)
    {

    }

    return 0;
}
