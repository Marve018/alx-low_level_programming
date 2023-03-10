#include "main.h"

/**
 *main_prime_number - helper function
 *@n: number calculated
 *@i: possible divisors
 *Return: 1 if prime number, 0 if not
 */
int main_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (main_prime_number(n, i - 1));
}
/**
 *is_prime_number - function that returns 1 if the input
 *integer is a prime number, otherwise return 0
 *@n: number calculated
 *Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime_number(n, n - 1));
}
