#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string text;
    cout << "Введите текст:" << '\n';
    getline(cin, text);
    cout << "Длина строки: " << text.size();
    return 0;
}
