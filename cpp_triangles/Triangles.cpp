#include <iostream>

int main() {
	int n;
	std::cout << "input integer in range(1,20): " << "\n";
	std::cin >> n;
	std::cout << "------ First task --------" << "\n";
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "------ Second task --------" << "\n";
	for (int k = n; k >= 1; --k) {
		for (int i = k; i > 1; --i) {
			std::cout << " ";
		}
		for (int j = (2*n-1); j >= 2*k-1; --j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "------ Third task --------" << "\n";
	int x = n / 2 + 1;
	int x2 = x;
	for (int i = 1; i <= x; ++i) {
		for (int k = (x2 - 1); k >= 1; --k) {
			std::cout <<" ";
		}
		--x2;
		for (int j = 1; j <= (i * 2 - 1); ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}
	x2 = 1;
	for (int i = (x - 1); i >= 1; --i) {
		for (int k = 1; k <= x2; ++k) {
			std::cout << " ";
		}
		++x2;
		for (int j = 1; j <= (i * 2 - 1); ++j) {
			std::cout << "*";
		}
		std::cout << "\n";
	}

	std::cout << "------ Fourth task --------" << "\n";
	int z;
	std::cout << "Input number of rombikov: ";
	std::cin >> z;
	x = n / 2 + 1;
	x2 = x;
	int r=0;
	for (int i = 1; i <= x; ++i) {
		while (r != z) {
			for (int k = (x2 - 1); k >= 1; --k) {
				std::cout << " ";
			}
			for (int j = 1; j <= (i * 2 - 1); ++j) {
				std::cout << "*";
			}
			for (int k = (x2 - 1); k >= 1; --k) {
				std::cout << " ";
			}
			++r;
		}
		--x2;
		r = 0;
		std::cout << "\n";
	}
	r = 0;
	x2 = 1;
	for (int i = (x - 1); i >= 1; --i) {
			while (r!=z){
			for (int k = 1; k <= x2; ++k) {
				std::cout << " ";
			}
			for (int j = 1; j <= (i * 2 - 1); ++j) {
				std::cout << "*";
			}
			for (int k = 1; k <= x2; ++k) {
				std::cout << " ";
			}
			++r;
			}
		std::cout << "\n";
		++x2;
		r = 0;
	}
	std::cout << "-------Fifth task---------" << "\n";
	x = n / 2 + 1;
	x2 = x;
	for (int i = 1; i <= x; ++i) {
		for (int k = (x2 - 1); k >= 1; --k) {
			std::cout << " ";
		}
		--x2;
		for (int j = 1; j <= (i * 2 - 1); ++j) {
			if (j % 2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}
	x2 = 1;
	for (int i = (x - 1); i >= 1; --i) {
		for (int k = 1; k <= x2; ++k) {
			std::cout << " ";
		}
		++x2;
		for (int j = 1; j <= (i * 2 - 1); ++j) {
			if (j % 2 == 0) {
				std::cout << " ";
			}
			else {
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}
	system("pause");
	return 0;
}
