#include "main.h"

/**
** jack_bauer - writes the character c to stdout
** @h: The character to print
** @m: Write
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar((h / 10) +'0');
_putchar((h % 10) +'0');
_putchar(':');
_putchar((m / 10) +'0');
_putchar((m % 10) +'0');
_putchar('\n');
}
}
}
