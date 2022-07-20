#include "main.h"

/**
 * is_palindrome - checks if a string is palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
