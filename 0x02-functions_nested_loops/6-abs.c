#include <stdio.h>

/**
 *_abs - computes the absolute value of an integer
 *@n: the int to print
 *Return: 0 if exited properly
 */

int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
