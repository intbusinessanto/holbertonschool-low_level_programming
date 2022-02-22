#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, followed by a new line, to stdout.
 * @s: Pointer to string to print
 * Return: Always 0
 */

void print_rev(char *s)
{

int i;
int t = 0;

while (*s != '\0')
{
s = s + 1;
t++;
}
for (i = 1; i <= t; i++)
{
_putchar(*(s - i));
}
_putchar('\n');

}
