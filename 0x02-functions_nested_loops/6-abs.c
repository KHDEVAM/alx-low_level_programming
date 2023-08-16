#include "main.h"
/**
 * int _abs - my program
 * Description: computes the absolute value of an integer
 * Return: 
 */
int _abs(int nbr)
{
	if (nbr < 0)
	{
		int |nbr|;

		|nbr| = nbr * -1;
		return (|nbr|);
	}
	else
	{
		return (nbr);
	}
}
