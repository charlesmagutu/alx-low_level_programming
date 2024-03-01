#include "main.c"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long integer
 * @index: unsigned long integer
 * Return: returns 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	n = 1 << index;
	*n = (*n | m);
	return (1);
}
