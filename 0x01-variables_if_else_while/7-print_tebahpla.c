#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{char abc = 'z';
for (; abc >= 'a'; abc--)
{putchar(abc);
}
putchar('\n');
return (0);
}
