#include "main.h"

/**
 * is_prime_number - check if number is prime or not.
 * @n: number to be checked
 *
 * Return: 1 if number is prime
 * 0 if number is not prime
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime -> it check prime number
 * @n: number
 * @i: iterator
 * Return: a 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}