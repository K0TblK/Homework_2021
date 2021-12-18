#include<iostream>

int main() {
	size_t rows,cols,dir;
	std::cout << "Input amount of rows: ";
	std::cin >> rows;
	std::cout << "Input amount of cols: ";
	std::cin >> cols;
	std::cout << "Input direction: " << "\n";
	std::cout << "Input 1 - at main diagonal; Input 2 - at additional diagonal" << "\n";
	std::cin >> dir;
	double** Matrix = new double*[rows];
	for (size_t r = 0; r < rows; ++r) {
		Matrix[r] = new double[cols];
	}
	size_t counter = 1;
	if (dir == 1) {
		int top = 0;
		int left = 0;
		Matrix[top][left] = counter;
		++counter;
		while (counter < (rows * cols + 1)) {
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
			if (top == rows - 1) {
				++left;
			}
			if (top != rows - 1) {
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
	}
	if (dir == 2) {
		int bot = rows-1;
		int right = cols-1;
		Matrix[bot][right] = counter;
		++counter;
		while (counter < (rows * cols + 1)) {
			if (right == 0) {
				--bot;
			}
			if (right != 0) {
				--right;
			}
			Matrix[bot][right] = counter;
			++counter;
			while ((right < cols-1) && (bot > 0)) {
				++right;
				--bot;
				Matrix[bot][right] = counter;
				++counter;
				if (counter > rows * cols)
					break;
			}
			if (bot == 0) {
				--right;
			}
			if (bot != 0) {
				--bot;
			}
			Matrix[bot][right] = counter;
			++counter;
			while ((bot < rows-1) && (right > 0)) {
				++bot;
				--right;
				Matrix[bot][right] = counter;
				++counter;
				if (counter > rows * cols)
					break;
			}
			if (counter > rows * cols)
				break;
		}
	}
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			std::cout << Matrix[r][c] << "\t";
		}
		std::cout << "\n";
	}
}
