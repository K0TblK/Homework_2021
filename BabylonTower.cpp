#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Input room number \n";
    int x;
    cin >> x;
    int kl = 0;
    int triplet, stroka, nomer;
    for (size_t i = 1; i <= x; i++) {
        for (size_t j = 1; j <= i; j++) {
            for (size_t k = 1; k <= i; k++) {
                kl += 1;
                if (kl == x) {
                    triplet = i;
                    stroka = j;
                    nomer = k;
                    break;
                }
            }
            if (kl == x)
            {
                break;
            }
        }
        if (kl == x)
        {
            break;
        }
    }
    if (kl == 1)
        cout << kl << "The room is on the 1st floor";
    else
        cout << kl << " The room is on the " << triplet * (triplet - 1) / 2 + stroka << "th floor and in " << nomer << "th flat";
    return(0);
}