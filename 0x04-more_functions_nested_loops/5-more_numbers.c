#include <unistd.h>
#include "main.h"

/**
** _isdigit - writes the character c to stdout
** @a: The character to print
** @b: The character to print
** @r: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void more_numbers(void)
{
    int c;
    int s;

    for (s = 0; s <= 10; s++){
        for (c = '0'; c <= '14'; c++){
        _putchar(c);
        }
    }   
    _putchar('\n');
}
