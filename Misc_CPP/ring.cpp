#include <iostream>
#include <cmath>
int main() {
    double outCirc, inCirc, x, y, xyr;
    std::cout << "Outside Circle = ";
    std::cin >> outCirc;
    std::cout << "Inner Circle = ";
    std::cin >> inCirc;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    if (rb <= rm) {
        std::cout << "Outside circle radius must not be less than Inner circle radius";
        return -1;
    }
    xyr = sqrt((x * x) + (y * y));
    if (xyr > inCirc and xyr < outCirc)
    {
        std::cout << "The point is inside the ring";
    }
    else {
        std::cout << "The point is outside the ring";
    }
    return 0;

}
