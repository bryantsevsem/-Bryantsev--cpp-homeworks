#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;

static string cleanToken(string s) {
    size_t left = 0;
    while (left < s.size() && !(isalnum(static_cast<unsigned char>(s[left])) || s[left] == '_' || s[left] == '-')) {
        left++;
    }
    size_t right = s.size();
    while (right > left && !(isalnum(static_cast<unsigned char>(s[right - 1])) || s[right - 1] == '_' || s[right - 1] == '-')) {
        right--;
    }
    return s.substr(left, right - left);
}

static bool isIntegerToken(const string &s) {
    if (s.empty()) {
        return false;
    }
    size_t i = 0;
    if (s[0] == '-') {
        if (s.size() == 1) {
            return false;
        }
        i = 1;
    }
    for (; i < s.size(); i++) {
        if (!(s[i] >= '0' && s[i] <= '9')) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> tokens;
    string token;
    while (cin >> token) {
        token = cleanToken(token);
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }

    int startIndex = 0;
    int n = static_cast<int>(tokens.size());
    if (!tokens.empty() && isIntegerToken(tokens[0])) {
        n = stoi(tokens[0]);
        startIndex = 1;
        if (startIndex + n > static_cast<int>(tokens.size())) {
            n = static_cast<int>(tokens.size()) - startIndex;
        }
    }

    bool current = true;
    cout << '[';
    for (int i = 0; i < n; i++) {
        const string &word = tokens[startIndex + i];
        if (word == "flick") {
            current = !current;
        }
        cout << boolalpha << current;
        if (i + 1 < n) {
            cout << ", ";
        }
    }
    cout << ']';
    return 0;
}
