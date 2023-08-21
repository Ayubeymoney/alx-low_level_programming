#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow before performing the operation */
		if (num > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
