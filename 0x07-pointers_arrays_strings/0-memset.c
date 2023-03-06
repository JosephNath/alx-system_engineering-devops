#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the designed value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
