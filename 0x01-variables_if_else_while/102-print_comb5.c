#include <stdio.h>

/**
 * main - code that prints all possible combinations of two two-digit numbers
 * Return: 0 if exited properly
 */

int main(void)
{
int h, i, j, k;
for (h = 48; h <= 57; h++)
{
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 57; k++)
{
if (((j + k) > (h + i) && j >= h) || h < j)
{
putchar(h);
putchar(i);
putchar(' ');
putchar(j);
putchar(k);
if (h + i + j + k == 227 && h == 57)
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
}
}
putchar('\n');
return (0);
}
