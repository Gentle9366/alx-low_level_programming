#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: The int to print
 *Return: 0 if exited properly
 */

int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}
