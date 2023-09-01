#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cents, min_coins;
	int coins[] = {25, 10, 5, 2, 1};
	size_t i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
			return (0);
	}

	min_coins = 0;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			min_coins++;
		}
	}

	printf("%d\n", min_coins);
	return (0);
}
