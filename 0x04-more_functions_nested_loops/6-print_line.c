#include <unistd.h>
#include "main.h"

/**
** more_numbers - writes the character c to stdout
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void print_line(int n)
{
int s;
if (n > 0)
{
for (s = 0; s < n; s++)
_putchar('_');
_putchar('\n');
}
else
_putchar('\n');
}
