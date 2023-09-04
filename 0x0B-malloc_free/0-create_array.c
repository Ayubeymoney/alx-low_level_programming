#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with a char
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
