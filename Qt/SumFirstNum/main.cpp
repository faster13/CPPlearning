#include <iostream>
#include <vector>
#include <windows.h>
#include <exception>

using namespace std;

int main(int argc, char *argv[])
try {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<int> numbers;
    int nm = 0, sum = 0;

    cout << "������� ��� �����, ����� ������ (��� ����������� ����� ������� <|>): ";

    while(cin >> nm)
    {
        if (!nm) break;
        numbers.push_back(nm);
    }

    cin.clear();
    cin.ignore();

    cout << "������� ���������� �����, ������� ������ ��������������: ";

    cin >> nm;
    if (!nm) nm = 0;

    cout << "����� ������ " << nm << " �����: ";

    for (int i = 0; i < nm; ++i)
    {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }

    cout << " ����� " << sum << "." << endl;

    return 0;
}
catch (exception& ex)
{
    cerr << ex.what();
}
