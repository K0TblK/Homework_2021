#include <iostream>
#include <math.h>
int main() {
    int n;
    std::cout << "Input room's number: ";
    std::cin >> n;
    int nk = 0;
    int floor = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            for (int k = 1; k <= i;++k) {
                ++nk; 
                if (n == nk) {
                    std::cout << "\n The room is on the " << floor << "th floor and in " << k << "th flat";
                    break;
                }
            }    
        ++floor;
        }
   

    }
    return(0);
}
