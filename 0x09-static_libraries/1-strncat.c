#include "main.h"
/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{

        	int d;
        	int e;

        	d = 0;
        	while (dest[d] != '\0')
        	{
                    	d++;
        	}

        	e = 0;
        	while (e < n && src[b] != '\0')
        	{
        	dest[d] = src[b];
        	d++;
        	e++;
        	}
        	dest[d] = '\0';

        	return (dest);
}
