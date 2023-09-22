#include "main.h"

/**
 * _strncat - main function
 * @n: parameter
 * @src: parameter
 * @dest: parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
