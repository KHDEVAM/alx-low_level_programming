#include <stdio.h>
/**
 * main - main function
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		printf("%d", nb);
	}
	printf("\n");
	return (0);
}
