#include <stdio.h>

/**
 * main - Displays all alphabet in lowercase
 *
 * Always: Return (Success)
 *
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
