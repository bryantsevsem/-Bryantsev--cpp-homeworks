#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const int size = 5;
    int arr[size];
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 500;
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Элементы массива:" << '\n';
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i + 1 < size) {
            cout << ' ';
        }
    }
    cout << '\n' << "Сумма элементов: " << sum;
    return 0;
}
