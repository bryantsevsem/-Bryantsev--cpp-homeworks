#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double radius;
    cout << "Введите радиус круга: " << '\n';
    cin >> radius;
    double area = 3.14 * radius * radius;
    cout << "Площадь круга: " << area;
    return 0;
}
