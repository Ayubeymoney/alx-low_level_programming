#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, repeated 10 times,
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9) /* For numbers 10 and above */
			{
				_putchar('0' + j / 10); /* Print the tens digit */
			}
			_putchar('0' + j % 10); /* Print the units digit*/
		}
		_putchar('\n'); /* Print a new line after each set of numbers */
	}
}
