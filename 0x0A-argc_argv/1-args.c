#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress the unused parameter warning */
	printf("%d\n", argc - 1);
	return (0);
}
