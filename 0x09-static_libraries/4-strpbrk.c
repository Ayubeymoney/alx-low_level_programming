#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the input string
 * @accept: Pointer to the set of bytes to search for
 * Return: Pointer to the first occurrence of a byte from accept in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s); /* Match found, return pointer to the matching byte */
			}
			a++;
		}
		s++;
	}

	return (NULL); /* No match found */
}
