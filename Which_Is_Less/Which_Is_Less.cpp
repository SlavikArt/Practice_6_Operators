#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "rus");

    int num1 = 19;
    int num2 = 3;
    int num3 = 2;
    int num4 = 5;

    int min = (num1 < num2 && num1 < num3) ? (num1 < num4 ? num1 : num4) : (num2 < num3 ? num2 : num3 < num4 ? num3 : num4);

    cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << "\n";

    cout << min << " - самое меньшее\n";
}
