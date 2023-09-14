#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from q to 10 followed by a new line
 * prints Fizz for multiples of three instead of hte number
 * for multiples of five prints Buss
 * Return: Always 0 Success
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf("Fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf("Buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d", i);
	}
	}
	printf("\n");

	return (0);
}
