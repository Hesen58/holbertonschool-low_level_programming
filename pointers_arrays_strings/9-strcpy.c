#include "main.h"
#include <string.h>
/**
 * *_strcpy - Something useful
 * @src: Something more useful
 * @dest: Something more useful
 *
 * Return - Something much more useful
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = strlen(src);
	b = a;
	while (a >= 0)
	{
		*dest=*src;
		src++;
		dest++;
		a--;
	}
	while (b >= 0)
	{
		dest--;
		b--;
	}
	return(dest);
}
