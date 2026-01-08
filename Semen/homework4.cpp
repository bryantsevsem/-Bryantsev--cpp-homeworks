#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    int code = static_cast<int>(c);
    int nextCode = code + 1;
    char nextChar = static_cast<char>(nextCode);
    cout << "Символ: " << c << '\n';
    cout << "Код: " << code << '\n';
    cout << "Код следующего символа: " << nextCode << '\n';
    cout << "Следующий символ: " << nextChar;
    return 0;
}
