#include <iostream>
int main() {
    int num, notation;
    std::cout << "Input number and notation" << "\n";
    std::cin >> num >> notation;
    int deg = 1;
    int temp = num;
    while ((temp /= notation) != 0)
        deg *= notation;
    while (deg != 0) {
        if ((num / deg) < 10) {
            std::cout << (num / deg);
        }
        else {
            std::cout << char(((num / deg) % 10) + 65);
        }
        num %= deg;
        deg /= notation;
    }
    std::cout << std::endl;
    return 0;
}
