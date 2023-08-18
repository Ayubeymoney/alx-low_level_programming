#include "main.h" /* Include the header file where _putchar is declared */

/**
 * print_triangle - Prints a triangle using the # character
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline if size is 0 or less */
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* Print spaces before each row to align the triangle */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* Print # characters for the current row */
		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n'); /* Print a newline after each row */
	}
}
