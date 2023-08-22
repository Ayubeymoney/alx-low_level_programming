#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be processed.
 */
void puts2(char *str)
{
	int i = 0;
	int n;

	for (n = 0; str[n] != 0; n++)
	{
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
	}
	}

	_putchar(10);
}
