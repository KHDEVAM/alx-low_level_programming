#include <stdio.h>
/**
 * main - main function
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	int nb = 122;

	while (nb >= 97)
	{
		putchar(nb);
		nb--;
	}
	putchar('\n');
	return (0);
}
