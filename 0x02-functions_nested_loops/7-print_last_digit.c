#include "main.h"
/**
 * print_last_digit - my program
 * Description: prints the last digit of a number
 * @number: variable that stocks the number that we want to get its last digit
 * Return: Return the value of the last digit of number.
 */
int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10;
	if (last_digit < 0)
	{
		last_digit = number * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
