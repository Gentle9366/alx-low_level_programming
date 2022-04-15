#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c the int to print
 *Return: 0 if exited properly
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
