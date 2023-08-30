#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The input string
 *
 * Description: This function recursively prints each character of the input
 * string followed by a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
