#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float num;
    int dollar, cent;

    cout << "Введите сумму в $:\n";
    cin >> num;

    dollar = num;
    cent = (num - dollar) * 100;
    cout << dollar << " долларов " << cent << " центов ";
    return 0;
}
