#include <stdio.h>

/**
 * main - code that prints the lowercase alphabet in reverse
 * Return: 0 if exited properly
 */

int main(void)
{
char alphabet;
for (alphabet = 122 ; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
