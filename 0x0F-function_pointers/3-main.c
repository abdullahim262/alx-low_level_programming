#include "3-calc.h"

/**
 * main - check arguments
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: error if number of arguments are wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if there is only one parameter */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}