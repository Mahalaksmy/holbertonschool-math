#include "holberton.h"
/**
 * addition -  performs the addition operation to complex numbers.
 * @c1: Variable1
 * @c2: Variable2
 * @c3: Variable3
 * Return: Function Void.
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}