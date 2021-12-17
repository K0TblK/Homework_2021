#include<iostream>
#include<cmath>
int main(){
	int n;
	double x, sum=0;
	std::cout << "Input amount of elements: ";
	std::cin >> n;
	std::cout << "\n" << "Input argument: ";
	std::cin >> x;
	for (int i = 0; i < n; ++i) {
		sum += sin(x);
		x = sin(x);
	}
	std::cout << "Summary of subsequence: " << sum << "\n";
	return(0);
}
