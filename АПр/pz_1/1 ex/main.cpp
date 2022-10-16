#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double x, y, n, Z;

    y = 0;
    Z = 0;

    for (float x = 3; x <= 21; x = x + 0.62) {
        for (float n = 1; n >= -5; n = n - 0.5) {
            Z = (((1 + sqrt(abs(1 - x))) / (pow(x, 2) - 1 + sqrt(1 + x))) +
                 ((1 - sqrt(1 + x)) / (1 + pow(x, 2) - sqrt(1 + x)))) /
                ((sqrt(abs(1 - x)) - sqrt(1 + x)) / (sqrt(pow(x, 2) - 1)));

            y = pow(Z, 3) - pow(n, 2) - (8 / (abs(pow(Z, 3) - pow(n, 2)) + 6));

            cout << "For n = " << n << " and x = " << x << ", y = " << y << "\n";
        }
    }
    return 0;
}
