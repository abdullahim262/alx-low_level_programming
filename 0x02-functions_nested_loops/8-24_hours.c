#include "stdio.h"

/**
 * jack_bauer -> prints 24 hours
 */

void jack_bauer(void)

{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				putchar('0');
				putchar(i + '0');
			}
			else if (i >= 10)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				putchar(':');
				putchar('0');
				putchar(j + '0');
			}
			else if (j >= 10)
			{
				putchar(':');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
			putchar('\n');
		}
	}
}
