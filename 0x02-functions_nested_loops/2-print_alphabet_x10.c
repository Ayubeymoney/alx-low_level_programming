#include "main.h"

/**
 *print_alphabet - Prints the lowercase alphabet followed by a new line.
 */

void print_alphabet(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 10)
	{
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	count++;
	letter = 'a';
	}
}
