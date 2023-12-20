#include  "main.h"
/**
 * _strcat - combines two strings together
 * @dest: pointer to string
 * @src: pointer to string to attach to dest
 *
 * Return void
 */
char *_strcat(char *dest, char *src)
{

        	int a;
        	int b;

        	a = 0;
        	while (dest[a] != '\0')
        	{
                    	a++;
        	}
        	b = 0;
        	while (src[b] != '\0')
        	{
                    	dest[a] = src[b];
                    	a++;
                    	b++;
        	}

        	dest[a] = '\0';
        	return (dest);
}
