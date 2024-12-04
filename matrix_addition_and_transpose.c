#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

// Function to take input for a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols)
{
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }
}

int main()
{
    int rows, cols;

    // Taking input for matrix dimensions
    printf("Enter number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];

    // Input the first matrix
    printf("Enter first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    // Input the second matrix
    printf("Enter second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    // Displaying matrices
    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1, rows, cols);

    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2, rows, cols);

    // Addition of matrices
    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nResult of Matrix Addition:\n");
    displayMatrix(result, rows, cols);

    // Transpose of the first matrix
    transposeMatrix(matrix1, result, rows, cols);
    printf("\nTranspose of the First Matrix:\n");
    displayMatrix(result, cols, rows);

    return 0;
}
