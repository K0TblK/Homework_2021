#pragma once
// Function that allocates memory for matrix
// Params:
// cols -- number of matrix cols
// rows -- amount of matrix rows
// Return value:
// pointer to matrix
// WARNING! Don't forget to delete memory
double** createMatrix(size_t rows, size_t cols);
void deleteMatrix(double** matrix, size_t rows, size_t cols);
void inputMatrix(double** matrix, size_t rows, size_t cols);
void printMatrix(double** matrix, size_t rows, size_t cols);
void fillMatrix(double** matrix, size_t rows, size_t cols, double n);
void zeroes(double** matrix, size_t rows, size_t cols);
void ones(double** matrix, size_t rows, size_t cols);
double** linspace(size_t length);
double** transpose(double** matrix, size_t rows, size_t cols);
void rotate180(double** matrix, size_t rows, size_t cols);
double** plusMatrix(double** matrixA, double** matrixB, size_t rows, size_t cols);
double** minusMatrix(double** matrixA, double** matrixB, size_t rows, size_t cols);
double** productMatrix(double** A, double** B, size_t rowsA, size_t colsA, size_t colsB);
double& maximumMatrix(double** matrix, size_t rows, size_t cols);
double& minmaxMatrix(double** M, size_t rows, size_t columns);
void mixMatrix(double** M, size_t rows, size_t columns, size_t K_1, size_t K_2);
double determinant(double** matrix, size_t size);