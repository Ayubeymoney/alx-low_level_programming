#include "main.h" /* Include the header file where _putchar is declared */

/**
 * print_diagonal - Draws a diagonal line using the \ character
 * @n: The number of times the \ character should be printed
 */
void print_diagonal(int n)
{
	int spaces = 0;
	int i;

	if (n <= 0)
	{
		_putchar('\n'); /* Print a newline if n is 0 or less */
		return;
	}

	while (n > 0)
	{
		/* Print leading spaces */
		for (i = 0; i < spaces; i++)
			_putchar(' ');

		_putchar('\\'); /* Print the \ character */
		_putchar('\n'); /* Print a newline after each diagonal character */

		spaces++; /* Increase the number of leading spaces for the next iteration */
		n--;
	}
}
