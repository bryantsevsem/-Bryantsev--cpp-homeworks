#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите три числа:";
    double a;
    double b;
    double c;
    cin >> a >> b >> c;
    double average = (a + b + c) / 3.0;
    cout << "Среднее арифметическое: " << average;
    return 0;
}
