#include <iostream>
#include <unordered_map>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input((istreambuf_iterator<char>(cin)), istreambuf_iterator<char>());
    vector<long long> values;
    long long number = 0;
    bool inNumber = false;
    bool negative = false;
    for (char ch : input) {
        if (!inNumber) {
            if (ch == '-') {
                inNumber = true;
                negative = true;
                number = 0;
            } else if (ch >= '0' && ch <= '9') {
                inNumber = true;
                negative = false;
                number = ch - '0';
            }
        } else {
            if (ch >= '0' && ch <= '9') {
                number = number * 10 + (ch - '0');
            } else {
                values.push_back(negative ? -number : number);
                inNumber = false;
            }
        }
    }
    if (inNumber) {
        values.push_back(negative ? -number : number);
    }

    if (values.size() < 3) {
        cout << "-1, -1";
        return 0;
    }

    int n = 0;
    long long target = 0;
    vector<long long> nums;
    if (values[0] >= 2 && static_cast<size_t>(values[0] + 2) == values.size()) {
        n = static_cast<int>(values[0]);
        nums.assign(values.begin() + 1, values.begin() + 1 + n);
        target = values.back();
    } else {
        nums.assign(values.begin(), values.end() - 1);
        target = values.back();
        n = static_cast<int>(nums.size());
    }

    unordered_map<long long, int> indexByValue;
    int index1 = -1;
    int index2 = -1;
    for (int i = 0; i < n; i++) {
        long long needed = target - nums[i];
        auto it = indexByValue.find(needed);
        if (it != indexByValue.end()) {
            index1 = it->second;
            index2 = i;
            break;
        }
        indexByValue[nums[i]] = i;
    }

    cout << index1 << ", " << index2;
    delete[] nums;
    return 0;
}
