#include "main.h"

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
	int len = 0

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
