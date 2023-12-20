#include "main.h"
/**
 * char *_strcpy - duplicates string pointed to by src
 * @dest: copy to dest
 * @src: copy from src
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{

        	int g = 0;
        	int f = 0;
        	while (*(src + g) != '\0')
        	{
                    	g++;
        	}
        	for ( ; f < g ; f++)
        	{
                    	dest[f] = src[f];
        	}
        	dest[g] = '\0';
        	return (dest);
}
