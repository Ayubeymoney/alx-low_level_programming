#include <stdio.h>
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
	char password[12]; /* The password length in the crackme is */

	srand(time(0)); /* Seed the random number generator with the current*/

	for (i = 0; i < 11; i++)
	{
		/* Generate a random character within the ASCII range  */
		password[i] = rand() % 94 + 32; /* ASCII range: 32 to 125 */
	}

	password[11] = '\0'; /* Null-terminate the string */

	printf("Generated password: %s\n", password);

	return (0);
}
