#include <stdio.h>

/**
 * main - code that prints all the numbers of base 16 in lowercase
 * Return: 0 if exited properly
 */

int main(void)
{
char num;
for (num = 48 ; num <= 57; num++)
{
putchar(num);
}
for (num = 97 ; num <= 102; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
