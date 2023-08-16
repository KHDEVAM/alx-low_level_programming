#include "main.h"
/**
 * print_alphabet - the essentiel function
 * Description: prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
