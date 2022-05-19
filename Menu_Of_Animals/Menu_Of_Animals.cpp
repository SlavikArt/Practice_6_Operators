#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    char choice;

    cout << "Меню животных:\n\n";

    cout << "1 - кошка\n";
    cout << "2 - собака\n";
    cout << "3 - лягушка\n";
    cout << "4 - корова\n";
    cout << "5 - осел\n";

    cout << "\nВведите номер: ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        cout << "Мяу мяу\n";
        break;
    case '2':
        cout << "Гаф гаф\n";
        break;
    case '3':
        cout << "Ква ква\n";
        break;
    case '4':
        cout << "Му му\n";
        break;
    case '5':
        cout << "Ио ио\n";
        break;
    default:
        cout << "Ошибка :(\n";
        break;
    }
}
