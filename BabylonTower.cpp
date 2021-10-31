#include <iostream>
#include <math.h>
int main() {
    int N;
    std::cout << "Input room's number: ";
    std::cin >> N;
    int nk = 0;
    int floor = 1;
    for (int i = 1; i <= 1000; ++i) {
        for (int j = 1; j <= i; ++j) {
            for (int k = 1; k <= i;++k) {
                ++nk; 
                if (N == nk) {
                    std::cout << "\n The room is on the " << floor << "th floor and in " << k << "th flat";
                    break;
                }
            }    
        ++floor;
        }
   

    }
    return(0);
}