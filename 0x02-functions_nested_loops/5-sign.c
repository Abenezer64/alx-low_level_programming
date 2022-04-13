#include "main.h"

/** 
 * print_sign - print
 * @n: the number 
 *
 *  Return: 1 if the numeber is greater than zero, 0 if equal, -1 if the number is less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
