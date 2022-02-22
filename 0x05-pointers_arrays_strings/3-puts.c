#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: Pointer to string to print
 * Return: Always 0
 */

void _puts(char *str)
{

for (; *str != '\0';)
{
_putchar(*str);
str++;
}
_putchar('\n');

}
