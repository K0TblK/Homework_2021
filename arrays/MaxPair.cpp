#include<iostream>

int main() {
    int n;
    int A[1000];
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    int Max = 0;
    int idxMax = 0;
    for (int i = 0; i < n-1; ++i) {
        if ((A[i] + A[i + 1]) > Max) {
            Max = A[i] + A[i + 1];
            idxMax = i;
        }
    }
    std::cout << A[idxMax] << " " << A[idxMax + 1];
    return 0;
}
