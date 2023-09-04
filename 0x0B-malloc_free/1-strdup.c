#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails or str is NULL
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
