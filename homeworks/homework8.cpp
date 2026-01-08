#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    string word;
    cout << "Введите слово:" << '\n';
    getline(cin, word);
    bool isogram = true;
    for (size_t i = 0; i < word.size(); i++) {
        if (word[i] == ' ') {
            continue;
        }
        for (size_t j = i + 1; j < word.size(); j++) {
            if (word[j] == ' ') {
                continue;
            }
            if (word[i] == word[j]) {
                isogram = false;
                break;
            }
        }
        if (!isogram) {
            break;
        }
    }
    cout << boolalpha << isogram;
    return 0;
}
