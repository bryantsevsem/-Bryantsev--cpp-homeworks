#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int year;
    cout << "Введите год:" << '\n';
    cin >> year;
    bool leap = false;
    if (year % 400 == 0) {
        leap = true;
    } else if (year % 100 == 0) {
        leap = false;
    } else if (year % 4 == 0) {
        leap = true;
    }
    if (leap) {
        cout << "Год високосный.";
    } else {
        cout << "Год не високосный.";
    }
    return 0;
}
