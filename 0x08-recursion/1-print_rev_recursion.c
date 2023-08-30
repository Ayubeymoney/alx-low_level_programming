#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The input string
 *
 * Description: This function recursively prints each character of the input
 * string in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
