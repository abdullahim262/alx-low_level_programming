#include <stdio.h>

/**
 * main -> this is function to prints its  name
 * @argc: argc parameter
 * @argv: an array of the command listed
 * Return: 0 for success
 */
int main(int agrc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
