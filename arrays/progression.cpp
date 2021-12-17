#include<iostream>

int main() {
    int n;
    int A[1000];
    int temp;
    std::cout << "Input size of an array" << "\n";
    std::cin >> n;
    std::cout << "Input an array" <<"\n";
    for (int i = 1; i <= n; ++i) {
        std::cin >> temp;
        A[i] = temp;
    }
    int r = A[2] - A[1];
    bool check = true;
    for (int i = 1; i < n; ++i) {
        if ((A[i + 1] - A[i]) != r) {
            check = false;
            break;
        }
    }
    if (check) {
        std::cout << r;
    }
    else {
        std::cout << 0;
    }
}
