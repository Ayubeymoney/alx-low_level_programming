#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the input string
 * @c: Character to be located
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c) /* Check the null-terminator as well */
	{
		return (s);
	}

	return (NULL);
}
