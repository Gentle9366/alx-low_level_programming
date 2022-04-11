#include <stdio.h>

/**
 * main - code that prints all possible different combinations of two digits
 * Return: 0 if exited properly
 */

int main(void)
{
int a, b;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
if (a != b && b != a)
{
putchar(a);
putchar(b);
if (a + b == 113 && a == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
