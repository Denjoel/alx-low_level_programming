#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string
 * @s: String to evaluate
 * Return: Number of words
 */

int count_word(char *s)
{
	int flag, j, w;

	flag = 0;
	w = 0;

	for (j = 0; s[j] != '\0'; c++)
	{
		if (s[j] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits string to words
 * @str: string to split
 * Return: Pointer to an array of strings (Success)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, j = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - j;
				k++;
				j = 0;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
