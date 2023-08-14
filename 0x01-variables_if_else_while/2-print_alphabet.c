#include <stdio.h>
/**
 * main - main function
 * Description: Prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	int nbr = 97;

	while (nbr <= 122)
	{
		putchar(nbr);
		nbr++;
	}
	putchar('\n');
	return (0);
}
