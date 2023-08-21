#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for the program "101-crackme"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char password[12];

	srand(time(0));

	for (i = 0; i < 11; i++)
	{
		password[i] = rand() % 94 + 32;
	}

	password[11] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
