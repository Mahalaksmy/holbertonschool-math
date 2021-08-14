#include "holberton.h"

/**
 * argument - A function that returns the argument of a given complex number.
 * @c: Type Variable.
 * Return: The Result Argument
 */
double argument(complex c)
{
double x;

if (c.re == 0)
{
if (c.im == 0)
{
x = 0;
exit(99);
}
else if (c.im > 0)
{
x = (PI / 2);
exit(98);
}
else
{
x = ((3 * PI) / 2);
exit(98);
}
}
else if (c.re < 0 && c.im < 0)
{
x = atan2(c.im, c.re) - PI;
}
else if (c.re < 0 && c.im > 0)
{
x = atan2(c.im, c.re) + PI;
}
else
x = atan2(c.im, c.re);

return (x);
}
