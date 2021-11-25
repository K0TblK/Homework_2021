#include "Matrix.h"
#include <iostream>
double** createMatrix(size_t rows, size_t cols) {
	double** matrix = new double* [rows];
	for (size_t idx = 0; idx<rows; ++idx){
			matrix[idx] = new double [cols];
	}
	return matrix;
}
void deleteMatrix(double** matrix, size_t rows, size_t cols) {
	for (size_t idx = 0; idx < rows; ++idx) {
		delete[] matrix[idx];
	}
	delete[] matrix;
}
void printMatrix(double** matrix, size_t rows, size_t cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << '\t';
		}
		std::cout << '\n';
	}
	std::cout << "\n";
}
void inputMatrix(double** matrix, size_t rows, size_t cols) {
	std::cout << "Input Matrix: " << "\n";
	for (size_t i = 0; i < rows; ++i) {
		std::cout << "Input " << i+1 << " rows of " << cols << " elements:" << "\n";
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}
void fillMatrix(double** matrix, size_t rows, size_t cols,double n) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			matrix[i][j]=n;
		}
	}
};
void zeroes(double** matrix, size_t rows, size_t cols) {
	fillMatrix(matrix, rows, cols, 0);
}
void ones(double** matrix, size_t rows, size_t cols) {
	fillMatrix(matrix, rows, cols, 1);
}
double** linspace(size_t length) {

	double** vec = createMatrix(1, length);
	for (size_t idx = 0; idx < length; ++idx) {
		vec[0][idx] = idx + 1;
	}
	return vec;
}
double** transpose(double** matrix, size_t rows, size_t cols) {
	double** transposed = createMatrix(cols, rows);
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; c++) {
			transposed[c][r] = matrix[r][c];
		}
	}
	return transposed;
}
template <typename Type>
void swap(Type& a, Type& b) {
	Type tmp = a;
	a = b;
	b = tmp;
}
void rotate180(double** matrix, size_t rows, size_t cols) {
	//Step 1. Reverse rows' elements
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols / 2; ++c) {
			swap(matrix[r][c], matrix[r][cols - c - 1]);
		}
	}
	//Step 2. Reverse rows by reversing pointers
	for (size_t r = 0; r < rows / 2; ++r) {
		swap(matrix[r], matrix[rows - r - 1]);
	}
}
double** plusMatrix(double** matrixA, double** matrixB, size_t rows, size_t cols) {
	double** summary = createMatrix(rows, cols);
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			summary[r][c] = matrixA[r][c] + matrixB[r][c];
		}
	}
	return summary;
}
double** minusMatrix(double** matrixA, double** matrixB, size_t rows, size_t cols) {
	double** diff = createMatrix(rows, cols);
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			diff[r][c] = matrixA[r][c] - matrixB[r][c];
		}
	}
	return diff;
}
double** productMatrix(double** A, double** B, size_t rowsA, size_t colsA, size_t colsB) {
	if (rowsA != colsB) {
		return 0;
	}
	double** product = createMatrix(rowsA, colsB);
	zeroes(product, rowsA, colsB);
	for (size_t rowP = 0; rowP < rowsA; ++rowP) {
		for (size_t colP = 0; colP < colsB; ++colP) {
			for (size_t idx=0; idx < colsA; ++idx) {
				product[rowP][colP] += A[rowP][idx] * B[idx][colP];
			}
		}
	}
	return product;
}
double& maximumMatrix(double** matrix, size_t rows, size_t cols) {
	size_t r_max = 0;
	size_t c_max = 0;
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			if (matrix[r][c] > matrix[r_max][c_max]) {
				r_max=r;
				c_max = c;
			}
		}
	}
	return matrix[r_max][c_max];
};
double& minmaxMatrix(double** matrix, size_t rows, size_t cols) {
	double** mins = new double*[rows];
	size_t c_min = 0;
	size_t max = 0;
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			if (matrix[r][c] < matrix[r][c_min]) {
				c_min = c;
			}
		}
		mins[r] = &matrix[r][c_min];
	}
	std::cout << "Minimums of your matrix: ";
	for (size_t idx = 0; idx < rows; ++idx) {
		std::cout << *mins[idx] << " ";
		if (*mins[idx] > *mins[max]) {
			max = idx;
		}
	}
	return *mins[max];

};
void mixMatrix(double** matrix, size_t rows, size_t cols, size_t K_1, size_t K_2) {
		//Swap rows
		for (size_t c = 0; c < cols; ++c) {
			double tmp = matrix[K_1-1][c];
			matrix[K_1-1][c] = matrix[K_2-1][c];
			matrix[K_2-1][c] = tmp;
		}
		//Swap columns
		for (size_t r = 0; r < rows; ++r) {
			double tmp = matrix[r][K_1-1];
			matrix[r][K_1-1] = matrix[r][K_2-1];
			matrix[r][K_2-1] = tmp;
		}
		
}
double determinant(double** matrix, size_t size)
{
	double det = 0;
	if (size == 1)
		return matrix[0][0];
	if (size == 2) {
		return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	}
	if (size == 3) {
		return matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[1][0] * matrix[2][1] * matrix[0][2] - matrix[0][2] * matrix[1][1] * matrix[2][0] - matrix[0][1] * matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][1] * matrix[0][0];
	}
	else {
		//Find the minors for the first row
		size_t fixedCol = 0;
		int sign = 1;
		for (size_t repeats = 1; repeats <= size; ++repeats) {
			double** temp = createMatrix(size - 1, size - 1);
			size_t col = 0;
			for (size_t idx = 0; idx < size; ++idx) {
				//Check if current column is not equal to the fixed one
				if (idx != fixedCol) {
					//if true fill the temp matrix's column
					for (size_t r = 0; r < size - 1; ++r) {
						temp[r][col] = matrix[r + 1][idx];
					}
					++col;
				}
			}
			det += sign*matrix[0][fixedCol]*determinant(temp, size - 1);
			++fixedCol;
			sign *= -1;
			deleteMatrix(temp, size - 1, size - 1);
		}

	}
	
	return det;
}
;