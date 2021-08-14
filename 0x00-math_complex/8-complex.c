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

	var.re  = m * cos(arg);
	var.im = m * sin(arg);

	*c3 = var;
}
