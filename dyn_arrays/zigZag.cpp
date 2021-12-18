#include<iostream>

int main() {
	size_t rows,cols;
	std::cout << "Input amount of rows: ";
	std::cin >> rows;
	std::cout << "Input amount of cols: ";
	std::cin >> cols;
	double** Matrix = new double*[rows];
	for (size_t r = 0; r < rows; ++r) {
		Matrix[r] = new double[cols];
	}
	size_t counter = 1;
	int top = 0;
	int left = 0;
	Matrix[top][left] = counter;
	++counter;
	while (counter < (rows * cols+1)) {
		if (left == cols - 1) {
			++top;
		}
		if (left != cols - 1) {
			++left;
		}
		Matrix[top][left] = counter;
		++counter;
		while ((left > 0) && (top < rows - 1)) {
			--left;
			++top;
			Matrix[top][left] = counter;
			++counter;
			if (counter > rows * cols)
				break;
		}
		if (top==rows-1) {
			++left;
		}
		if (top!=rows-1) {
			++top;
		}
		Matrix[top][left] = counter;
		++counter;
		while ((top > 0) && (left < cols - 1)) {
			--top;
			++left;
			Matrix[top][left] = counter;
			++counter;
			if (counter > rows * cols)
				break;
		}
		if (counter > rows * cols)
			break;
	}
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			std::cout << Matrix[r][c] << "\t";
		}
		std::cout << "\n";
	}
}
