#include "main.h"
/**
 * _islower - my program
 * Description: checks for lowercase character
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
