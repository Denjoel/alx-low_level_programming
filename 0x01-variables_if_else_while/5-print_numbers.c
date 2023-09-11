#include <stdio.h>
/**
 * main - numbers below 9
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
	putchar(num + '0');
	if (num < 9)
	{
		putchar(',');
		putchar(' ');
	}
	num++;
	}

	putchar('\n');
	return (0);
}
