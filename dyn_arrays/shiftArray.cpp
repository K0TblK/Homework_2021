#include <iostream>
int* shiftArray(int* A, int n, int k) {
	int* B = new int[n];
	for (size_t i = 0; i < n; ++i) {
		if (i < k) {
			B[n - k + i] = A[i];
		}
		else {
			B[i - k] = A[i];
		}
	}
	return B;
}
int main() {
	int n, k;
	std::cout << "Input size and shift of an array" << "\n";
	std::cin >> n >> k;
	int* arr = new int[n];
	std::cout << "Input an array" << "\n";
	for (size_t i = 0; i < n;++i) {
		std::cin >> arr[i];
	}
	int* shifted = shiftArray(arr, n, k);
	for (size_t i = 0; i < n; ++i) {
		std::cout << shifted[i] << " ";
    }
    delete[] arr;
    delete[] shifted;
    return 0;
}
