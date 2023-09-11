#include <unistd.h>
#include <stdio.h>
/**
 * main - prints numbers below 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	putchar('\n');
		return (0);
}
