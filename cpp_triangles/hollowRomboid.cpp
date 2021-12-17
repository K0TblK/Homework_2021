#include <iostream>
int main(){
    int n, r;
    std::cout << "Enter the half of the height: ";
    std::cin >> r;
    n = r * 2 - 1;
    int m, i, j;
    m = n / 2;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == m + i or j == m - i)
                std::cout << '';
            else 
                std::cout << ' ';
        }
        std::cout << "\n";
    }
    for (i = m; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j == m + n - i - 1 or j == i - m)
                std::cout << '';
            else 
                std::cout << ' ';
        }
        std::cout << "\n";
    }
    return 0;
}
