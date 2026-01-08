#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    double avg = (a + b + c) / 3.0;

    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}