#include <stdio.h>

/**
** main-main block
** Return: 0
**/

int main(void)
{

char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
if (i == 'e' || i == 'q')
putchar(' ');
putchar('\n');

return (0);
}
