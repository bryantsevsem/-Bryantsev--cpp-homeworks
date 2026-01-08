#include <iostream>
using namespace std;

void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i + 1 < size) {
            cout << ' ';
        }
    }
    cout << '\n';
    doubleArray(arr, size);
    cout << "После удвоения: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i + 1 < size) {
            cout << ' ';
        }
    }
    return 0;
}
