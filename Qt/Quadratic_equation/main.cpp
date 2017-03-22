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
        cout << "Уравнение имеет два корня: ";
        x1 = (-b + sqrt(dscr)) / (2 * a);
        x2 = (-b - sqrt(dscr)) / (2 * a);
        cout << "x1 = " << x1 << " и x2= " << x2 << endl;
    }
    else if (dscr = 0)
    {
        cout << "Уравненеие имеет один корень: ";
        x1 = -b / (2 * a);
        cout << "x = " << x1 << endl;
    }
    else
    {
        cout << "Уравнение не имеет корней" << endl;
    }
}

int main()
{
    using namespace std;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Инициализация переменных
    double a = 0, b = 0, c = 0;


    //Ввод данных
    cout << "Программа вычисляет квадратное уравнение ax^2 + bx + c = 0" << endl;
    cout << "Ведите переменные a, b, c через пробел: ";
    cin >> a >> b >> c;

    //Вычисления
    QuadrEq(a,b,c);


    return 0;
}
