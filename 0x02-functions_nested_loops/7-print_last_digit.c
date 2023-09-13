#include "main.h"

/**
 * print_last_digit - entry point
 * Description: function that ptints the lasst digit of a number.
 * @n: number to compute last digit
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
