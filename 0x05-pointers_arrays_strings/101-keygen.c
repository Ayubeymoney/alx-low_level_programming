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
	char password[12]; /* The password length crackme is 11 characters */
	char expected_output[] = "Tada! Congrats"; /* Expected output */

	srand(time(0)); /* Seed the random  with the current time */

	/*Keep generating passwords until the expected output is achieved */
	do {
		for (i = 0; i < 11; i++)
		{
			/* Generate a ASCII range of valid characters */
			password[i] = rand() % 94 + 32; /* ASCII range: 32 to 125 */
		}

		password[11] = '\0'; /* Null-terminate the string */
	} while (strcmp(password, expected_output) != 0);

	printf("Generated password: %s\n", password);

	return (0);
}
