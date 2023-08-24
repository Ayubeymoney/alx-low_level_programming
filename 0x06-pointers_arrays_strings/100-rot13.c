#include <stdio.h>
#include <stdbool.h>

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_letters = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*ptr)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*ptr == letters[i])
			{
				*ptr = rot13_letters[i];
				break;
			}
		}

		ptr++;
	}

	return (str);
}
