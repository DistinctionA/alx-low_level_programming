#include <stdio.h>

/**
 * main - Displays single digits of base 10 from 0
 *
 * Always: Return (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
