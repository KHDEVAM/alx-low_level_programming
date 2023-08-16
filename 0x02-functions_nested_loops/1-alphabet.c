#include "main.h"
/**
 * print_alphabet - the essentiel function
 * Description: prints alphabets in lowercase
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = "a"; letter <= "c"; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
