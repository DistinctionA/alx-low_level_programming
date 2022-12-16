#include <stdio.h>

/**
 * main - Displays the alphabet in lowercase
 *
 * return: Always 0 (Success)
 */
int main(void){
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return 0;
}
