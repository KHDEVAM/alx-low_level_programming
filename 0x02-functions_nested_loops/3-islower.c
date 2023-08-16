#include "main.h"
/**
 * _islower - my program
 * Description: checks for lowercase character
 * @c: The variable that stocks the character for cheching
 * Return: 1 if the charater is lowercase or o if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
