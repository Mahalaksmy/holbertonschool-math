#include "holberton.h"
/**
 * modulus - Afunction that returns the modulus.
 * @c: Variable.
 * Return: Modulus
 */

double modulus(complex c)
{

double n1, n2, mod;
double x = 2.0;

n1 = pow(c.re, x);
n2 = pow(c.im, x);
mod = sqrt(n1 + n2);

return (mod);
}
