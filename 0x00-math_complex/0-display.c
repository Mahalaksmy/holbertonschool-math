#include "holberton.h"
/**
 * display_complex_number - function that displays the complex numbers
 *
 * @c: Type of struct.
 *
 * Return: 0
 **/
void display_complex_number(complex c)
{
		if (c.im > 1)
		{
			printf("%.0f + %.0fi\n", c.re, c.im);
		}
		else if (c.im > 0 && c.im < 1)
		{
			printf("%.1f + %.1f\n", c.re, c.im);
		}
		else if (c.im == 0)
		{
			printf("%.0f\n", c.re);
		}
		else if (c.re == 0)
		{
			printf("%.0fi\n", c.im);
		}
		else if (c.im == 1)
		{
			printf("%.0f + i\n", c.re);
		}
		else if (c.im == -1)
		{
			printf("%.0f - i\n", c.re);
		}
		else if (c.im < -1)
		{
			printf("%.0f - %.0fi\n", c.re, (-c.im));
		}
        else
	    printf("%.0f + %.0fi\n", c.re, c.im);
}
