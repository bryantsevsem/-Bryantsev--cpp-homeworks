#include <iostream>
#include <algorithm>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;
    int index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            index = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << "Индекс искомого элемента: " << index;
    delete[] arr;
    return 0;
}
