#include "main.h" /* Include the header file where _putchar is declared */

/**
 * print_line - Draws a straight line using the _ character
 * @n: The number of times the _ character should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* Print a newline if n is 0 or less */
		return;
	}

	while (n > 0)
	{
		_putchar('_'); /* Print the _ character */
		n--;
	}
	_putchar('\n'); /* Print a newline at the end of the line */
}
