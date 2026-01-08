#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 0) {
        cout << boolalpha << false;
        return 0;
    }
    int original = x;
    int reversed = 0;
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    bool result = original == reversed;
    cout << boolalpha << result;
    return 0;
}
