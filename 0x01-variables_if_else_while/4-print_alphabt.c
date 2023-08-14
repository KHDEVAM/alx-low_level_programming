#include <stdio.h>
/**
 * main - main function
 * Description: prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	int nb = 97;

	while (nb <= 122)
	{
		if (nb == 101 || nb == 113)
		{
			nb++;
			continue;
		}
		putchar(nb);
		nb++;
	}
	putchar('\n');
	return (0);
}
