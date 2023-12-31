#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * pint - Something usefull
 * @zor: Something more usefull
 *
 * Return: Something more usefull
 */
void pint(va_list zor)
{
	printf("%d", va_arg(zor, int));
}
/**
 * pchar - Something usefull
 * @zor: Something more usefull
 *
 * Return: Something more usefull
 */
void pchar(va_list zor)
{
	printf("%c", (char)va_arg(zor, int));
}
/**
 * pfloat - Something usefull
 * @zor: Something more usefull
 *
 * Return: Something more usefull
 */
void pfloat(va_list zor)
{
	printf("%f", (float)va_arg(zor, double));
}
/**
 * pstring - Something usefull
 * @zor: Something more usefull
 *
 * Return: Something more usefull
 */
void pstring(va_list zor)
{
	char *s = va_arg(zor, char *);

	while (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - Something usefull
 * @format: Something more usefull
 *
 * Return: Something much more usefull
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list zor;
	bomba arr[] = {
				 {pint, 'i'},
				 {pchar, 'c'},
				 {pfloat, 'f'},
				 {pstring, 's'},
	};
	const char *s = format;

	va_start(zor, format);
	while (format != NULL && s[j])
	{
		if (arr[i].format == s[j])
		{
			arr[i].f(zor);
			if (s[j + 1])
			{
				printf(", ");
			}
			i = -1;
			j++;
		}
		i++;
		j += i / 4;
		i %= 4;
	}
	printf("\n");
	va_end(zor);
}
