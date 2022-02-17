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

void print_numbers(void)
{
    char c = '/';

    while((c++) < '9')
        _putchar(c);

}
