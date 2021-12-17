#include<iostream>
int main(){
	double eps, sum = 4, sign = -1, counter = 1;
	std::cout << "Input epsilon: ";
	std::cin >> eps;
	do {
		sum += 4 * sign * (1.0/(2*counter+1));
		sign *= -1;
		++counter;
	} while (4 * abs(1.0 / (2 * counter + 1)) >= eps);
	std::cout << "Summary of subsequence: " << sum << "\n";
	return (0);
}
