#include "main.h"
#include <stdio.h>

/**
** swap_int - writes the character c to stdout
** @a: The character to print
** @b: The character to print
**
** Return: On success 1.
** On error, -1 is returned, and errno is set appropriately.
**/

void swap_int(int *a, int *b)
{

int i;
i = *a;
*a = *b;
*b = i;
}
