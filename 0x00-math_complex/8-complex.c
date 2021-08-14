#include "holberton.h"
/**
 * complex_from_mod_arg - A function that update the real and the imaginary
 *parts of a complex number given its modulus and arguments.
 * @m: Varible module
 * @arg: Is a argument
 * @c3: Variable Type Pointer.
 * Return: Is a Function Void.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
    complex var;
	double x = 0, y = 0;

	x = m * cos(arg);
	y = m * sin(arg);

	var.re = x;
	var.im = y;

	*c3 = var;
}
