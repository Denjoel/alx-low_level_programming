#include <stdio.h>
#include <stdib.h>
#include <time.h>

/**
 * main - genrated random valid passwords fot the 101 - crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rad() % 67;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((1368 - sum) - '0' < 67)
		{
			n = 1368 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
