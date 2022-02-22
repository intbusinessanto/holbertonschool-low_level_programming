#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints a string, followed by a new line, to stdout.
 * @str: Pointer to string to print
 * Return: Always 0
 */

void puts_half(char *str)
{
char *first = str;
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
str--;
first += (length % 2) ? (length + 1) / 2 : (length) / 2;
while (first <= str)
{
_putchar(*first);
first++;
}
_putchar('\n');
}
