#include "main.h"

/**
 * _strcat - main funtion
 * @src: concatenation parameter
 * @dest: concatenation parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int j, r;

	j = 0;
	r = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[r] != '\0')
	{
		dest[j] = src[r];
		j++;
		r++;
	}
	desr[j] = '\0';
	return (dest);
}
