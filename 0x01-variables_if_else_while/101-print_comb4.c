#include <stdio.h>

/**
 * main - code that prints all possible different combinations of three digits
 * Return: 0 if exited properly
 */

int main(void)
{
int x, y, z;
for (x = 1; x <= 3; x++)
{
for (y = 1; y <= 3; y++)
{
for (z = 1; z <= 3; z++)
{
if (x != y && x != z && y != z)
{
putchar(x);
putchar(y);
putchar(z);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
