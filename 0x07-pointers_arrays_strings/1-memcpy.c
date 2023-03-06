#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = dest;
	const char *s = src;
	while (n--)
        	*d++ = *s++;
	return dest;
}
