#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main function
  * @size: function parameter
  * @a: function parameter
  * Return: Always 0.
  */
void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int j;

	count1 = 0;
	count2 = 0;

	for (j = 0; j < size; j++)
	{
	count1 = count1 + a[j * size + j];
	}
	for (j = size - 1; j >= 0; j--)
	{
	count2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
