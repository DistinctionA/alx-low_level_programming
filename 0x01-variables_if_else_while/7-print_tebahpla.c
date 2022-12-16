#include <stdio.h>

/**
 * main - Displays the lowercase characters in reverse
 *
 * Always: Return (Success)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter --)
		putchar(letter);

	putchar('\n');
	return (0);

}
