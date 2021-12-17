#include<iostream>

int main() {
    int n, tmp;
    std::cout << "Input size of an array: "; std::cin >> n;
    int arr[1000] = {};
    std::cout << "Input an array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> tmp;
        arr[i] = tmp;
    }
    std::cout << "Answer: ";
    for (int i = 0; i < n / 2; ++i) {
        std::cout << arr[i] << " ";
        std::cout << arr[n - i -1] << " ";
    }
    if (n % 2 != 0)
        std::cout << arr[n / 2];

    return 0;
}
