#include "main.h"

/**
 * main - code that prints alphabet in lowercase
 * Return: 0 if exited properly
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
