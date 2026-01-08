#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
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
