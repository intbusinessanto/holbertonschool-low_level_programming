#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a string, followed by a new line, to stdout.
 * @a: Pointer to string to print
 * @n: Pointer to string to print
 * Return: Always 0
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", *(a + i));
}
if (n > 0)
printf("%d\n", *(a + (n - 1)));
else
printf("\n");
}
