#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;
	while (n--)
        	*d++ = *s++;
	return dest;
}
