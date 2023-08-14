#include <stdio.h>
/**
 * main - main function
 * Description: Print the alphabet in lowercase, and then in uppercase
 * Return: always 0
 */
int main(void)
{
	int nb = 97;
	int nb2 = 65;

	while (nb <= 123)
	{
		putchar(nb);
	}
	while (nb2 <= 90)
	{
		putchar(nb2);
	}
	putchar('\n');
	return (0);
}
