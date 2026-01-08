#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string stack;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push_back(c);
        } else {
            if (stack.empty()) {
                cout << boolalpha << false;
                return 0;
            }
            char top = stack.back();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                stack.pop_back();
            } else {
                cout << boolalpha << false;
                return 0;
            }
        }
    }
    bool valid = stack.empty();
    cout << boolalpha << valid;
    return 0;
}
