#include <stdlib.h>
#include <string.h>
/**
 * array_range - Something usefull
 * @min: Something more usefull
 * @max: Something more usefull
 *
 * Return: Something much more usefull
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
