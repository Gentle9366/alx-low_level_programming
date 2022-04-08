#include <stdio.h>

/**
 * main - code that prints all possible combinations of single-digit numbers
 * Return: 0 if exited properly
 */

int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num == 57)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
