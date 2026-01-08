#include <iostream>
using namespace std;

int sumOfThree(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << "Сумма: " << sumOfThree(a, b, c);
    return 0;
}
