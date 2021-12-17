#include <iostream>
int main() {
    double a, b, c;
    std::cout << "ax^2+bx+c=0" << "\n";
    std::cout << "Input a" << "\n";
    std::cin >> a;
    std::cout << "Input b" << "\n";
    std::cin >> b;
    std::cout << "Input c" << "\n";
    std::cin >> c;
    if ((a == 0) && (b != 0) && (c != 0)) {
        std::cout << "Root of equation: " << -1 * c / b << "\n";
    }
    else if ((a != 0) && (b != 0) && (c == 0)) {
        std::cout << "Roots of equation: 0 and " << -1 * b / a << "\n";
    }
    else if ((a != 0) && (b == 0) && (c != 0)) {
        if (-c > 0) {
            double x1 = sqrt(c) / a;
            double x2 = sqrt(c) / a;
            std::cout << "Roots of equation: " << x1 << " and " << x2 << "\n";
        }
    }
    else if ((a == 0) && (b == 0) && (c != 0)) {
        std::cout << "Constant is not an equation" << "\n";
    }
    else if ((a != 0) && (b != 0) && (c != 0)) {
        double d = b * b - 4 * a * c;
        if (d < 0) {
            std::cout << "There are no roots" << "\n";
        }
        if (d == 0) {
            std::cout << "Root of equation: " << -1 * b / 2 / a << "\n";
        }
        if (d > 0) {
            double x1 = ((-b + sqrt(d)) / (2 * a));
            double x2 = ((-b - sqrt(d)) / (2 * a));
            std::cout << "Roots of equation: " << x1 << " and " << x2 << "\n";
        }
    }
    else {
        std::cout << "x=0" << "\n";
    }
    return 0;
}
