#include <iostream>
using namespace std;

int main() {
    int year;
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
