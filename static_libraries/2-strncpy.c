#include "main.h"
/**
 * _strncpy - Something useful
 * @dest: Something more useful
 * @src: Something more useful
 * @n: Something more useful
 *
 * Return: Something much more useful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i + j < n)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
		{
			*(dest + i + j) = '\0';
			j++;
		}
	}
	return (dest);
}
