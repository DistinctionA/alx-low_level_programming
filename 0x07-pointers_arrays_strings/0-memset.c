#include "main.h"
#include <stdio.h>

/**
 * _memset - prints a block of memory with a specific value
 * @s: the address of memory to print
 * @b: the desired value
 * @n: the size of the memory to print
 *
 * Return: changed array with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
