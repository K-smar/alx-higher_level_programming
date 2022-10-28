#include "main.h"

/**
 * binary_to_uint - converts a binary n
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = l; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != 'l')
		{
			return (0);
		}
		if (b[len] & l)
		{
			ui += base_two;
		}
	}

	return (ui);
et number

