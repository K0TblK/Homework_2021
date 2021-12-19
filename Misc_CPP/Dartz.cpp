#include <iostream>
 long long int hitOrMiss(int R) {
    long int counter = 0;
    for (long long int x = 0; x <= R; ++x) {
        for (long long int y = 0; y <= R; ++y) {
            if ((x * x + y * y) <= R*R) {
                ++counter;
            }
        }
    }
    return counter;
}

int main() {
    long long int R;
    std::cin >> R;
    std::cout << (hitOrMiss(R) - R)*4+1;
    return 0;
}
