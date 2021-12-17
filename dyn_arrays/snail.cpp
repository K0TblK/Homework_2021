#include <iostream>
int main(){
    int n, m;
    std::cout << "Input amount of rows: ";
    std::cin >> n;
    std::cout << "Input amount of columns: ";
    std::cin >> m;
    int top = 0;
    int bot = n;
    int left = 0;
    int right = m;
    int counter = 1;
    int** Matrix = new int* [n];
    for (int i = 0; i < n; ++i) {
        Matrix[i] = new int[n];
    }
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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << Matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
    return 0;
}
