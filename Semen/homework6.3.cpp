#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    cout << "Длина строки: " << text.size();
    return 0;
}
