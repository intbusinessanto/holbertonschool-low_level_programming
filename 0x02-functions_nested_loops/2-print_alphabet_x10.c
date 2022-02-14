#include "main.h"

/**
** _putchar - writes the character c to stdout
** @c: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void print_alphabet_x10(void)
{

int i;
char s;

for (i = 'a'; i < 'z'; i++)
{
s = _putchar(i);
}

_putchar('\n');
for (s = 0; s <=10; s++)
{
_putchar(s);
}
_putchar('\n');
}
