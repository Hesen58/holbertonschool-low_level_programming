#include <stdlib.h>
/**
 * strtow - Something useful
 * @str: Something more useful
 *
 * Return: Something much more useful
 */
char **strtow(char *str)
{
	char **s;
	int i, j = 0, len_s = 0, row_count = 0, zeros = 0, a = 0, zeros_old = 0, hoqa;

	while (str[a] != '\0')
	{
		if (str[a] != 32 && (str[a + 1] == 32 || str[a + 1] == '\0'))
			row_count++;
		a++;
	}
	if (row_count == 0)
	{
		return (NULL);
	}
	s = malloc((row_count + 1) * sizeof(char *));
	for (i = 0; i < row_count; i++)
	{
		while (str[zeros + zeros_old] == 32)
		{
			zeros++;
		}
		hoqa = zeros + zeros_old;
		while (str[len_s + hoqa] != 32 && str[len_s + hoqa] != '\0')
		{
			len_s++;
		}
		s[i] = malloc(sizeof(char) * len_s + 1);
		while (j < len_s)
		{
			s[i][j] = str[j + zeros + zeros_old];
			j++;
		}
		s[i][j] = '\0';
		zeros_old += (len_s + zeros);
		len_s = 0;
		zeros = 0;
		j = 0;
	}
	s[row_count] = NULL;
	return (s);
}
