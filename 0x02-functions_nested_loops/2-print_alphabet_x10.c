#include "main.h"
/**
 * print_alphabet_x10 - my program
 * Description: Print alphabets in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;

	while (lines <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			_putchar('\n');
			lines++;
		}
	}
}
