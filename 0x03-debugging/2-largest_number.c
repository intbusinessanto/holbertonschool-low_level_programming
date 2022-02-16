#include "main.h"

/**
** largest_number - returns the largest from 3 different numbers
** @a: int 1
** @b: int 2
** @c: int 3
** Return: The largest number
**/

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
