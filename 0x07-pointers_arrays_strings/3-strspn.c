#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the input string
 * @accept: Pointer to the string containing acceptable characters
 * Return: Number of bytes in the initial segment of s consisting of bytes from
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			
			break;
		}
	}

	return length;
}
