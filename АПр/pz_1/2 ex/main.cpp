#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, y, n, Z;

    y = 0;
    Z = 0;
    for (float x = 3; x <= 15; x = x + 0.74) {
        for (float n = -5; n <= 1; n = n + 0.5) {
            Z = (20 * (pow((x - 2) / (x + 1), 2))) -
                (5 * (pow((x + 2) / (x - 1), 2))) +
                (48 * ((pow(x, 2) - 4) / ((pow(x, 2)) - 1)));

            y = (pow(7, Z) * ((pow(sqrt(2), 2 * (pow(n, 2)) - 6))) - (pow(7 / 4, Z)));

            cout << "For x = " << x << " and n = " << n << ", y = " << y << "\n";
        }
    }
    return 0;
}
