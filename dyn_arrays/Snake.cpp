#include<iostream>
int main(){
    int n,m, counter=1;
    std::cout << "Input amount of rows: ";
    std::cin >> n;
    std::cout << "\n" << "Input amount of columns: ";
    std::cin >> m;
    int** Matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        Matrix[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i % 2 == 0) {
                Matrix[i][j]=counter;
                ++counter;
            }
            else {
                Matrix[i][m-j-1] = counter;
                ++counter;
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
