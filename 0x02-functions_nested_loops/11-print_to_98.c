#include "main.h"
#include <stdio.h>

/**
** print_to_98 - writes the character c to stdout
** @n: The character to print
** @s: The character to a
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void print_to_98(int n)
{
int s;

for (s = n; s <= 98; s++)
{        
printf('%d\n', s);
printf(',');
printf(' ');
}

for (s = n; s >= 98; s--)
{
printf('%d\n', s);
printf(',');
printf(' ');
}   

_putchar('\n');
}
