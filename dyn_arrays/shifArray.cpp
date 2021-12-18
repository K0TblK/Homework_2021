#include<iostream>
void shiftArray(int* A, int n, int k) {
    for (int i = 0; i < n; ++i) {
        if (i < k) {
            A[n-k+i] = i;
        }
        else {
            A[i-k] = i;
        }
    }
}
int main(){
    int n, k;
    std::cout << "input size of an array: ";
    std::cin >> n;
    std::cout << "input shift of an array: ";
    std::cin >> k;
    int* a = new int [n];
    shiftArray(a, n, k);
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << "\t";
    }
    delete[] a;
    return 0;
}
