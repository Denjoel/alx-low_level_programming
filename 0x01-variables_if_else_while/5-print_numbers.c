#include <stdio.h>
/**
 * main - numbers
 * Return: Always 0
 */
int main(void)

{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	if (num != '0' && num != '9')
	putchar(num);
	}

	putchar('\n');
	return (0);
}
