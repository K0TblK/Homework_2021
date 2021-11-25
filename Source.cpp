#include <iostream>
#include "Matrix.h"

int main() {
	size_t const Rows = 4;
	size_t const Cols = 3;
	double** matrix = createMatrix(Rows, Cols);
	//
	ones(matrix, Rows, Cols);
	printMatrix(matrix, Rows, Cols);

	zeroes(matrix, Rows, Cols);
	printMatrix(matrix, Rows, Cols);

	fillMatrix(matrix, Rows, Cols, -1.2);
	matrix[0][1] = 2;
	matrix[2][1] = -3;
	printMatrix(matrix, Rows, Cols);
	
	double** transposed = transpose(matrix, Rows, Cols);
	printMatrix(transposed, Cols, Rows);
	deleteMatrix(transposed, Cols, Rows);

	for (size_t r=0; r < Rows; ++r) {
		for (size_t c = 0; c < Cols; ++c) {
			matrix[r][c] =r*Cols+c;
		}
	}
	printMatrix(matrix, Rows, Cols);
	rotate180(matrix, Rows, Cols);
	printMatrix(matrix, Rows, Cols);
	deleteMatrix(matrix, Rows, Cols);

	double** vec = linspace(Cols);
	printMatrix(vec, 1, Cols);
	deleteMatrix(vec, 1, Cols);
	
	/*
	matrix = createMatrix(Rows, Cols);
	inputMatrix(matrix, Rows, Cols);
	std::cout << "Maximum of your matrix: " << maximumMatrix(matrix, Rows, Cols) << "\n";
	std::cout << "Maximum of minimums of rows in your matrix: " << minmaxMatrix(matrix, Rows, Cols) << "\n";
	mixMatrix(matrix, Rows, Cols, 1, 3);
	printMatrix(matrix, Rows, Cols);
	deleteMatrix(matrix, Rows, Cols);
	*/

	/*
	double** matrixA = createMatrix(3, 3);
	double** matrixB = createMatrix(3, 3);
	inputMatrix(matrixA, 3, 3);
	inputMatrix(matrixB, 3, 3);
	printMatrix(productMatrix(matrixA, matrixB, 3, 3, 3),3,3);
	*/

	double** matrixA = createMatrix(4, 4);
	inputMatrix(matrixA, 4, 4);
	std::cout << "Determinant of your matrix: " << determinant(matrixA, 4);
	deleteMatrix(matrixA, 4, 4);

	return 0;
}