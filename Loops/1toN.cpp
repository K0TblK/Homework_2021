#include<iostream>
int main(){
//--------First task
	int n;
	double sum = 1;
	std::cout << "input n: ";
	std::cin >> n;
	for (int i = 2; i <= n; ++i) {
		sum += 1.0 / i;
	}
	std::cout << "summary of subsequence: " << sum << "\n";
	return(0);
}
