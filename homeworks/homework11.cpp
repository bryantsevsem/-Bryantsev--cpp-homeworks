#include <iostream>
#include <string>
using namespace std;

int valueOfRoman(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0;
}

int main() {
    string s;
    cin >> s;
    int result = 0;
    for (size_t i = 0; i < s.size(); i++) {
        int current = valueOfRoman(s[i]);
        int next = 0;
        if (i + 1 < s.size()) {
            next = valueOfRoman(s[i + 1]);
        }
        if (current < next) {
            result -= current;
        } else {
            result += current;
        }
    }
    cout << result;
    return 0;
}
