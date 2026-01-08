#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введите число n:" << '\n';
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Сумма чисел до n: " << sum;
    return 0;
}
