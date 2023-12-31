#include "main.h"
/**
 * _calloc - like maloc but with zero s
 * @nmemb: the number of elements to allocate memo for
 * @size: the size of each element
 * Return: a pointer of type void to this chunk of mem
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;
	char *p;

	if (nmemb <= 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (ptr);
}
