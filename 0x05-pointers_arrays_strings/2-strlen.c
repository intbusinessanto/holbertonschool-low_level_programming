#include "main.h"
#include <stdio.h>


/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
int i;
int len = 0;

for (i = 0; *(s + i) != '\0'; i++)
len = len + 1;
return (len);
}
