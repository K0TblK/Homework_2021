#include <iostream>
#include<string>
std::string alignLeft(int number, int spaces) {
    std::string result = std::to_string(number);

    int currDigits = 0;

    do {
        ++currDigits;
        number /= 10;
    } while (number);

    int add = spaces - currDigits;

    for (int i = 0; i < add; ++i) {
        result += " ";
    }

    return result;
}
int main()
{
    std::cout << "Enter size of massive nxm = ";
    int cols, rows;
    std::cin >> cols >> rows;

    int** x = new int* [rows];
    int* spaces = new int[rows];

    for (int i = 0; i < rows; ++i) {
        x[i] = new int[cols];
        int max = 0;

        for (int j = 0; j < cols; ++j) {
            x[i][j] = rand() % 100000;

            if (x[i][j] > max) {
                max = x[i][j];
            }
        }

        int digits = 0;

        do {
            ++digits;
            max /= 10;
        } while (max);

        spaces[i] = digits;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << alignLeft(x[j][i], spaces[j]) << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] x[i];
    }

    delete[] x;
    return 0;
}
