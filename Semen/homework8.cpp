#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    getline(cin, word);
    bool isIsogram = true;
    for (size_t i = 0; i < word.size(); i++) {
        if (word[i] == ' ') {
            continue;
        }
        for (size_t j = i + 1; j < word.size(); j++) {
            if (word[j] == ' ') {
                continue;
            }
            if (word[i] == word[j]) {
                isIsogram = false;
                break;
            }
        }
        if (!isIsogram) {
            break;
        }
    }
    cout << boolalpha << isIsogram;
    return 0;
}
