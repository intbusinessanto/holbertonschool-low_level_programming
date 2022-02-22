#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string, followed by a new line, to stdout.
 * @s: Pointer to string to print
 * Return: Always 0
 */

void rev_string(char *s)
{
char *i = s;
char temp;

while (*s != '\0')
s = s + 1;
s = s - 1;

while (i <= s)
{
temp = *i;
*i = *s;
*s = temp;

i = i + 1;
s = s - 1;
}
}
