#include "main.h"
/**
 * clear_bit - sets the value of a bit at a
 * given index to 0
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: return 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	if (*n & x)
		*n ^= x;
	return (1);
}
