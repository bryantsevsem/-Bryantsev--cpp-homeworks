#include <iostream>
using namespace std;

int main() {
    int arr[2][2] = {{5, 2}, {7, 4}};
    cout << "Элементы массива:" << '\n';
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    cout << "Главная диагональ:" << '\n';
    cout << arr[0][0] << arr[1][1];
    return 0;
}
