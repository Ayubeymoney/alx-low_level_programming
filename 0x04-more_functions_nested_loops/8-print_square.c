#include "main.h" /* Include the header file where _putchar is declared */

/**
 * print_square - Prints a square using the # character
 * @size: The size of the square
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline if size is 0 or less */
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#'); /* Print the # character for each column */
		_putchar('\n'); /* Print a newline after each row */
	}
}
