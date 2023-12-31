#include <stdio.h>
#include <stdbool.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_letters = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; leet_letters[i]; i++)
		{
			if (*ptr == leet_letters[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
		}

		ptr++;
	}
	return (str);
}
