#ifndef HOLBERTON_H
#define HOLBERTON_H
#define PI 3.14159265

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/**
 * struct complex - a complex number a + ib 
 * is represented by two doubles.
 *
 * @re: Is a variable real.
 * @im: Is a variable imaginary.
 */
typedef struct math_complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);

#endif /* HOLBERTON_H */