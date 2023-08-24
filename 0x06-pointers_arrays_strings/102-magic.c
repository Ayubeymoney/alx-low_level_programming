#include <stdio.h>

/**
 * main - Prints the value of a[2] using pointer manipulation
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5] = {98, 1988, 402, 1024, 48};
	int *p = a;

	*(p + 2) = 98; /* Add this line */

	printf("a[2] = %d\n", a[2]);
	
	return (0);
}
