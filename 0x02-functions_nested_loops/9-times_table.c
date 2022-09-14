#include <stdio.h>

/**
*main - Prints a serie of numbers with commas
*
* Return: Always (Success);
*/
int main(void)
{int a = '0';
for (; a <= '9'; a++)
{putchar(a);
if (a != '9')
{putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
