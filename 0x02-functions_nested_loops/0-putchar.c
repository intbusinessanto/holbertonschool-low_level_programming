#include "main.h"
#include <unistd.h>

/**
** _putchar - writes the character c to stdout
** @c: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

int main(void)
{

int i;
char p[] = "_putchar";

for (i = 0; i < 9; i++)
{
_putchar(p[i]);
}

_putchar('\n');
return (0);
}
