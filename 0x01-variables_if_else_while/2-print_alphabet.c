#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and prints the last digit of the number stored in the variable n
 * Return : always 0
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch); /* this is ascii code for new line*/
	}
	putchar(10);
	return (0);
}
