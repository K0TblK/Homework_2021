#include <iostream>
int main()
{
    double x, eps, sum = 0, deg = 1;
    std::cout << "Enter eps: ";
    std::cin >> eps;
    std::cout << "Enter x from -1 to 1: ";
    std::cin >> x;

    while (deg > eps)
    {
        sum += deg;
        deg *= x;
    }
    std::cout << "Summary equals  " << sum << std::endl;
    std::cout << "Function equals " << 1 / (1 - x) << std::endl;
    return 0;
}
