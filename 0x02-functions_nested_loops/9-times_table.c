#include "main.h"

/**
** _putchar - writes the character c to stdout
** @c: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void times_table(void)
{
int m, n, r;
for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
r = n * m;
if (r <= 9)
{
_putchar('0' + r);
if (n != 9)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
}
else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
if (n != 9)
{
_putchar(44);
_putchar(32);
}
}
}
_putchar('\n');
}
}