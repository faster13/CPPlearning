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

    cout << "¬ведите р€д чисел, через пробел (дл€ прекращени€ ввода нажмите <|>): ";

    while(cin >> nm)
    {
        if (!nm) break;
        numbers.push_back(nm);
    }

    cin.clear();
    cin.ignore();

    cout << "¬ведите количество чисел, которые хотите просуммировать: ";

    cin >> nm;
    if (!nm) nm = 0;

    cout << "—умма превых " << nm << " чисел: ";

    for (int i = 0; i < nm; ++i)
    {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }

    cout << " равна " << sum << "." << endl;

    return 0;
}
catch (exception& ex)
{
    cerr << ex.what();
}
