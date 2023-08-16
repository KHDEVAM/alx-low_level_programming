#include "main.h"
/**
 * _abs - my program
 * Description: computes the absolute value of an integer.
 * @nbr: The number to compute its absolute value.
 * Return: Absolute value of the number.
 */
int _abs(int nbr)
{
	if (nbr < 0)
	{
		int nbr_abs;

		nbr_abs = nbr * -1;
		return (nbr_abs);
	}
	else
	{
		return (nbr);
	}
}
