#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: area where bytes are copied to
 * @src: area where bytes are copied from
 * @n: number of bytes to copy
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{	
dest[i] = src[i];
i++;
}
return (dest);
}
