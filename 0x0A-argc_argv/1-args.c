#include <stdio.h>

/**
 * main -> this is function to prints its  name
 * @args: args parameter
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
