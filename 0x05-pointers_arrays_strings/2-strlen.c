#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char to check
 * @_strlen: string to check
 * Description: Returns the lenght of a string
 *
 * Always: Return 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
