#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

double QuadrEq (double a, double b, double c)
{
    double x1 = 0, x2 = 0;
    double dscr = 0;

    dscr = pow(b, 2) - (4 * a * c);

    if (dscr > 0)
    {
        cout << "��������� ����� ��� �����: ";
        x1 = (-b + sqrt(dscr)) / (2 * a);
        x2 = (-b - sqrt(dscr)) / (2 * a);
        cout << "x1 = " << x1 << " � x2= " << x2 << endl;
    }
    else if (dscr = 0)
    {
        cout << "���������� ����� ���� ������: ";
        x1 = -b / (2 * a);
        cout << "x = " << x1 << endl;
    }
    else
    {
        cout << "��������� �� ����� ������" << endl;
    }
}

int main()
{
    using namespace std;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //������������� ����������
    double a = 0, b = 0, c = 0;


    //���� ������
    cout << "��������� ��������� ���������� ��������� ax^2 + bx + c = 0" << endl;
    cout << "������ ���������� a, b, c ����� ������: ";
    cin >> a >> b >> c;

    //����������
    QuadrEq(a,b,c);


    return 0;
}
