#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++; /* For the newline character */
	}

	total_len++; /* For the null terminator */

	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			str[index++] = av[i][len++];
		}
		str[index++] = '\n';
	}

	str[index] = '\0';

	return (str);
}
