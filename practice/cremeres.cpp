#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, g, h, i, j, k, l;

    // Input coefficients of the system
    cout << "Enter coefficients for the system of equations:\n";
    cout << "Equation 1 (a1x + b1y + c1z = d1): a1, b1, c1, d1: ";
    cin >> a >> b >> c >> j;
    cout << "Equation 2 (a2x + b2y + c2z = d2): a2, b2, c2, d2: ";
    cin >> d >> e >> f >> k;
    cout << "Equation 3 (a3x + b3y + c3z = d3): a3, b3, c3, d3: ";
    cin >> g >> h >> i >> l;

    // Compute determinant of coefficient matrix
    double DetCF = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);

    if (DetCF == 0) {
        cout << "The system doesn't have a unique solution.\n";
    } else {
        // Determinants for x1, x2, x3
        double DetX1 = j * (e * i - f * h) - b * (k * i - f * l) + c * (k * h - e * l);
        double DetX2 = a * (k * i - f * l) - j * (d * i - f * g) + c * (d * l - k * g);
        double DetX3 = a * (e * l - k * h) - b * (d * l - k * g) + j * (d * h - e * g);

        // Compute solutions
        double x1 = DetX1 / DetCF;
        double x2 = DetX2 / DetCF;
        double x3 = DetX3 / DetCF;

        // Output results
        cout << "The solutions are:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
        cout << "x3 = " << x3 << "\n";
    }

    return 0;
}
