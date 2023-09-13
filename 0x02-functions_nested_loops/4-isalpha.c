#include "main.h"

/**
 * _isalpha - Checks charceter
 * @c: The charceter
 * Return: 1 for all
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
