#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<bool> res;
    res.reserve(n);

    bool state = true;
    for (const string& s : a) {
        if (s == "flick") state = !state;
        res.push_back(state);
    }

    for (int i = 0; i < n; ++i) {
        cout << (res[i] ? "1" : "0");
        if (i + 1 < n) cout << ' ';
    }
    return 0;
}
