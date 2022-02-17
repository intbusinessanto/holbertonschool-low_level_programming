#include <unistd.h>
#include "main.h"

/**
** more_numbers - writes the character c to stdout
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void more_numbers(void)
{
int c;
int s;

for (s = 0; s <= 10; s++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
