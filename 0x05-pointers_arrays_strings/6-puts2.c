#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string, followed by a new line, to stdout.
 * @s: Pointer to string to print
 * Return: Always 0
 */

void puts2(char *str)
{
int lenght = 0;

while (*str != '\0')
{
if ((lenght % 2) == 0)
_putchar(*str);
lenght++;
str++;
}
_putchar('\n');
}
