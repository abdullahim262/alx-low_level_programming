#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;
prinf("size of a char: %d byte(s)\n", (long unsigned)sizeof(d));
printf("size of an int: %a byte(s)\n", (long unsigned)sizeof(a));
printf("size of a long int: %b byte(s)\n", (long unsigned)sizeof(b));
printf("size of a long long int: %c byte(s)\n", (long unsigned)sizeof(c));
printf("size of a float: %f byte(s)\n", (long unsigned)sizeof(f));
return (0);
}
