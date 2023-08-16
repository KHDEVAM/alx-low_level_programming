#include "main.h"
/**
 * _isalpha - my program
 * Description: checks for alphabetic character
 * @c: The variable that stocks the character for checking
 * Return: 1 if the charater is alphabetic or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
