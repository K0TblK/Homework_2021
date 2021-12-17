#include <iostream>
#include <random>
#include <ctime>
int main()
{
    srand(time(NULL));
    int n;
    std::cout << "Input size of an array: "; std::cin >> n;
    int index, tmp, sum_of_arr = 0;
    int arr[1000] = {};
    for (int i = 0; i <= n; ++i) { // Fill an array
        arr[i] = i;
    }
    for (int i = 0; i <= n; ++i) { // Shuffle array
        index = rand() % n;
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
    arr[3] = -1; // Remove random, third element
    for (int i = 0; i <= n; i++)
        sum_of_arr += arr[i];
    ++sum_of_arr;
    for (int i = 0; i <= n; i++) { // Show array
        std::cout << arr[i] << " ";
    }
    std::cout << "Missing number is: " << n * (n + 1) / 2 - sum_of_arr << std::endl;
    return 0;
}
