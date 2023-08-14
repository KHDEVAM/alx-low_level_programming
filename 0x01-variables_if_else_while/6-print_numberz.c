#include <stdio.h>
/**
 * main - main function
 * Description: prints all single digit numbers of base 10 using only putchar
 * Return: Always 0
 */
int main(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		putchar(nb + 48);
	}
	putchar('\n');
	return (0);
}
