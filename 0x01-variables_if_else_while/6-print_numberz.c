#include <stdio.h>

/**
 * main - code that prints all single digit numbers of base 10 starting from 0
 * Return: 0 if exited properly
 */

int main(void)
{
int n;
for (n = 0 ; n <= 10; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
