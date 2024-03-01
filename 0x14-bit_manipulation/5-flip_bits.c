#include "main.h"
/**
 * flip_bits - returns number of bits you would need from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			x++;
	}
	return (x);
}
