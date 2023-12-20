#include "main.h"
/**
 * _isupper - checks for uppercase letters.
 * @c: char to check
 *
 * Return: for uppercase 1, anything else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
