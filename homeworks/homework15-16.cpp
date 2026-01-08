#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    double y;
    cin >> x >> y;
    double centerX = 2.0;
    double centerY = -1.0;
    double radius = 5.0;
    double dx = x - centerX;
    double dy = y - centerY;
    double distanceSquared = dx * dx + dy * dy;
    double radiusSquared = radius * radius;
    double epsilon = 1e-9;
    if (distanceSquared < radiusSquared - epsilon) {
        cout << "внутри";
    } else if (distanceSquared > radiusSquared + epsilon) {
        cout << "вне";
    } else {
        cout << "на";
    }
    return 0;
}
