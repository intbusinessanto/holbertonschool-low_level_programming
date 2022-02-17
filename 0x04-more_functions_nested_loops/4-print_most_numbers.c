#include "main.h"

/**
** print_most_numbers - writes the character c to stdout
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void print_most_numbers(void)
{
int c;

for (c = 0; c <= 9; c++){
    if (c != 2 && c != 4)
    _putchar(c + '0');
}

_putchar('\n');
}
