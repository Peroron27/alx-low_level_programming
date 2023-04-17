/*
 * file:0-binary_to_unit
 * author:Peter Aniefiok
 */


#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int pet_dal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		pet_dal = 2 * pet_dal + (b[i] - '0');
	}

	return (pet_dal);
}
