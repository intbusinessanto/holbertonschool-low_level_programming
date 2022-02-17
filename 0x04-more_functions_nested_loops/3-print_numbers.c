#include <unistd.h>
#include "main.h"

/**
** print_numbers - writes the character c to stdout
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
