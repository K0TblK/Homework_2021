#include<iostream>
int main() {
    int n, m, dir, counter = 1;
    std::cout << "Input amount of rows: ";
    std::cin >> n;
    std::cout << "\n" << "Input amount of columns: ";
    std::cin >> m;
    std::cout << "\n" << "Input direction:" << "\n";
    std::cout << "1 - from left to right; 2 - from right to left" << "\n";
    std::cin >> dir;
    int** Matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        Matrix[i] = new int[m];
    }
    if (dir == 1) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i % 2 == 0) {
                    Matrix[i][j] = counter;
                    ++counter;
                }
                else {
                    Matrix[i][m - j - 1] = counter;
                    ++counter;
                }
            }
        }
    }
    else if (dir == 2) {
        for (int i = 0; i < n; ++i) {
            for (int j = m-1; j >= 0; --j) {
                if (i % 2 == 0) {
                    Matrix[i][j] = counter;
                    ++counter;
                }
                else {
                    Matrix[i][m - j - 1] = counter;
                    ++counter;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << Matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}
