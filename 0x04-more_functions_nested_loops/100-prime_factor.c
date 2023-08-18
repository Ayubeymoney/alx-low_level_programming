#include <stdio.h>

/**
 * find_largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number for which to find the largest prime factor
 *
 * Return: The largest prime factor of the number
 */
long find_largest_prime_factor(long n)
{
	long largest_prime = -1;
	long i;

	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}
	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}
	return (largest_prime);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = find_largest_prime_factor(number);

	printf("%ld\n", largest_prime);
	return (0);
}
