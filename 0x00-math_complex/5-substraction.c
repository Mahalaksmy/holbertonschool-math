#include "holberton.h"

/**
 * substraction -  Afunction that performs the substraction.
 * @c1: Variable1.
 * @c2: Variable2.
 * @c3: Variable3 type pointer.
 * Return: A function Void.
 */

void substraction(complex c1, complex c2, complex *c3)
{
	complex c4;

c4.re = (c1.re) - (c2.re);
c4.im = (c1.im) - (c2.im);

*c3 = c4;
}
