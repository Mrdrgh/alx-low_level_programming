#include "main.h"
/**
 * count_words - counts the words in a string
 * @str: the string
 * Return: the number of words
*/
int count_words(char *str)
{
	int i = 0, flag = 0;
	char *p = str;

	while (*p)
	{
		if (*p == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			i++;
		}
		p++;
	}
	return (i);
}

/**
 * strtow - gives a string of words from a string
 * @str: the string
 * Return: the array of strings result
*/

char **strtow(char *str)
{
	char *p = str;
	char **string, *sub_string;
	int i = 0, c = 0, start = 0, len = 0, end = 0, j = 0;

	while (*p++)
		len++;
	string = malloc(sizeof(char *) * (1 + count_words(str)));
	if (!string)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			end = i;
			sub_string = malloc(sizeof(char) * (c + 1));
			if (!sub_string)
				return (NULL);
			while (start < end)
				*sub_string++ = str[start++];
			*sub_string = '\0';
			string[j] = sub_string - c;
			j++;
			c = 0;
		}
		else if (c++ == 0)
			start = i;
	}
	string[j] = NULL;
	return (string);
}
