#include <unistd.h>

/**
*_putchar - writes the character c to stdout
*@c: The charater to print
*
*Return: On success 1.
*On error, -1 is returned, and no errno is set appropriately.
*/
int _putchar(char c)
{
	return (wrie(1, &c, 1));
}
