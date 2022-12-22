#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: checks the destination
 * @src: checks the position of the source
 * 
 * Always: Return dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
