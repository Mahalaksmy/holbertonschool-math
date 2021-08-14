#include "holberton.h"
/**
 * multiplication - A a function that performs the multiplication operation
 * @c1: Variable1.
 * @c2: Variable2.
 * @c3: Variable3 type pointer.
 * Return: A function Void.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + (c1.im * c2.im * -1);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
