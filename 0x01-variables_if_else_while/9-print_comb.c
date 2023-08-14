#include <stdio.h>
/**
 * main - main function
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int nb;

	for (nb = 48; nb <= 57; nb++)
	{
		putchar(nb);
		if (nb == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
