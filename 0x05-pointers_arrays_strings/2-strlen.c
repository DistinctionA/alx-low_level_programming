#include "main.h"
/**
 * _strlen - returns the length of a string
 *
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
