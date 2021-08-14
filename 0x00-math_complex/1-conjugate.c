#include "holberton.h"

/**
 * conjugate - A function that returns the conjugate
 * @c: Variable 
 * Return: Variable
 */

complex conjugate(complex c)
{
	complex x;

	x.re = c.re;
	x.im = c.im * -1;
	return (x);
}