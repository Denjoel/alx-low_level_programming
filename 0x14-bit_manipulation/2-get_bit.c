
#include "main.h"

/**
 * get_bit - Function to return the value of bit at an index in decimal number.
 * @n: Number to search.
 * @index: Index of the bit
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
