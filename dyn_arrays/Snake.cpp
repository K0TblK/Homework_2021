#include <iostream>
int main() {
    int n, m, dir;
    std::cout << "Input amount of rows: ";
    std::cin >> n;
    std::cout << "Input amount of columns: ";
    std::cin >> m;
    std::cout << "\n" << "Input direction:" << "\n";
    do {
        std::cout << "1 - from left to right; 2 - from top to bottom" << "\n";
        std::cin >> dir;
    } while ((dir != 1) && (dir != 2));
    int top = 0;
    int bot = n;
    int left = 0;
    int right = m;
    int counter = 1;
    int** Matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        Matrix[i] = new int[n];
    }
    if (dir == 1) {
        while (counter != (n * m) + 1) {
            for (int i = left; i < right; ++i) {
                Matrix[top][i] = counter;
                ++counter;
            }
            ++top;
            for (int i = top; i < bot; ++i) {
                Matrix[i][right - 1] = counter;
                ++counter;
            }
            --right;
            for (int i = right - 1; i > left; --i) {
                Matrix[bot - 1][i] = counter;
                ++counter;
            }
            --bot;
            for (int i = bot; i >= top; --i) {
                Matrix[i][left] = counter;
                ++counter;
            }
            ++left;
        }
    }
    if (dir == 2) {
        while (counter != (n * m) + 1) {
            for (int i = top; i < bot; ++i) {
                Matrix[i][left] = counter;
                ++counter;
            }
            ++left;
            for (int i = left; i < right; ++i) {
                Matrix[bot-1][i] = counter;
                ++counter;
            }
            --bot;
            for (int i = bot-1; i >= top; --i) {
                Matrix[i][right-1] = counter;
                ++counter;
            }
            --right;
            for (int i = right-1; i >= left; --i) {
                Matrix[top][i] = counter;
                ++counter;
            }
            ++top;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << Matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    for (size_t i=0; i<n; ++i){
        delete[] Matrix[m];   
    }
    delete[] Matrix;
    return 0;
}
