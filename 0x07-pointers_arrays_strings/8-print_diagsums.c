#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int diag1_sum = 0, diag2_sum = 0;
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				diag1_sum += a[row * size + col];
			if (row + col == size - 1)
				diag2_sum += a[row * size + col];
		}
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
