#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите два числа:";
    int a;
    int b;
    cin >> a >> b;
    int result = a % b;
    cout << "Остаток от деления: " << result;
    return 0;
}
