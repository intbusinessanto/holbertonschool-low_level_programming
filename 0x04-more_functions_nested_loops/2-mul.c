#include "main.h"

/**
** mul - writes the character c to stdout
** @r: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

int mul(int a, int b)
{
int r;
r = (a * b);
return (r);
}
