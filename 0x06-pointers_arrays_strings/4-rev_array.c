#include "main.h"

/**
 * _strcmp - the main fuction
 * @st1: function parameter
 * @st2: function arameter
 * Return: st1, st2
 */

int _strcmp(char *st1, char *st2)
{
	int j = 0;

	while (st1[j] != '\0' && st2[j] != '\0')
	{
		if (st1[j] != st2[j])
		{
		return (st1[j] - st2[j]);
		}
		j++;
	}
	return (0);
}
