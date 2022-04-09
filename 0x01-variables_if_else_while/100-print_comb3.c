#include <stdio.h>

/**
 * main - code that prints all possible different combinations of two digits
 * Return: 0 if exited properly
 */

int main(void)
{
int a, b;
for (a = 1; a <= 2; a++)
{
putchar(a);
}
for (b = 1; b <= 2; b++)
{
putchar(b);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
