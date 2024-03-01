#include "main.h"
/**
 * _sqrt - to evalute from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 on success
 * -1 on error
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt of a number
 *
 * @n: number to find sqr
 * Return: returns 0 on success
 * returns 1 when error occures
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
