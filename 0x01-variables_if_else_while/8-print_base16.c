#include <stdio.h>
/**
 * main - main function
 * Description: prints the numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int nb;
	int nb1;

	for (nb = 48; nb <= 57; nb++)
	{
		putchar(nb);
	}
	for (nb1 = 97; nb1 <= 102; nb1++)
	{
		putchar(nb1);
	}
	putchar('\n');
	return (0);
}
