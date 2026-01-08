#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string name;
    cout << "Введите ваше имя:" << "\n";
    //getline(cin, name);
    cin >> name;
    cout << "Привет, " << name << "!";
    return 0;
}
