#include <iostream>
#include <vector>
#include <unordered_map>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long target;
    cerr << "Введите длину массива:" << '\n';
    cin >> n;

    vector<long long> nums(n);
    cerr << "Введите массив nums[]:" << '\n';
    for (int i = 0; i < n; ++i) cin >> nums[i];
    cerr << "Введите target:" << '\n';
    cin >> target;

    unordered_map<long long, int> pos;

    for (int i = 0; i < n; ++i) {
        long long need = target - nums[i];
        auto it = pos.find(need);
        if (it != pos.end()) {
            cout << it->second << ", " << i;
            return 0;
        }
        pos[nums[i]] = i;
    }

    // если нет решений:
    cout << "-1, -1";
    return 0;
}
