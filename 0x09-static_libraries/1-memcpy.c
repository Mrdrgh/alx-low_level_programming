#include "main.h"
/**
 * _memcpy - copies n allocated memory locations from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of chars in this case that will be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
