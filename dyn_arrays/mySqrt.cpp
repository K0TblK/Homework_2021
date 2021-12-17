#include <iostream>
double mysqrt(double x, double eps = 1e-6) {
    double n1 = 1, n2;
    do {
        n2 = n1;
        n1 = n2 - ((n1 * n1 - x) / 2 / n1);
    } while (std::abs(n1 - n2) > eps);
    return n1;
};
int main(){
  int x;
  std::cout << "Input integer" << "\n";
  std::cin >>  x;
  std::cout << mysqrt(x) << "\n";
  return 0;
}
