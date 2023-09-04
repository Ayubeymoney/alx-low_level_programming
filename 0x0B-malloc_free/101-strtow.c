#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 * @separators: A string containing separator characters.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c, char *separators)
{
	while (*separators)
	{
		if (c == *separators)
			return (1);
		separators++;
	}
	return (0);
}
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * @separators: A string containing separator characters.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str, char *separators)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (!is_separator(*str, separators))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char *separators = " \t\n";
	int num_words = count_words(str, separators);
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	int i = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	if (num_words == 0)
		return (NULL);

	if (words == NULL)
		return (NULL);

	while (*str)
	{
		while (*str && is_separator(*str, separators))
			str++;

		if (*str)
		{
			char *end = str;
			while (*end && !is_separator(*end, separators))
				end++;

			words[i] = (char *)malloc((end - str + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				while (i > 0)
					free(words[--i]);
				free(words);
				return (NULL);
			}

			strncpy(words[i], str, end - str);
			words[i][end - str] = '\0';
			i++;

			str = end;
		}
	}

	words[i] = NULL;
	return (words);
}
