#include <iostream>
#include <windows.h>
using namespace std;

long sumToN(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return n + sumToN(n - 1);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cin >> n;
    cout << "Сумма: " << sumToN(n);
    return 0;
}
