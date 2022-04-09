#include <stdio.h>

/**
 * main - code that prints all possible different combinations of two digits
 * Return: 0 if exited properly
 */

int main(void)
{
int a, b;
for (a = 0; a <= 1; a++)
{
for (b = 0; b <= 1; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
