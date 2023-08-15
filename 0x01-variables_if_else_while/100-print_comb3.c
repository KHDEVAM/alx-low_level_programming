#include <stdio.h>
/**
 * main - main function
 * Description: prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			int first_digit = i < j ? i : j;
			int second_digit = i < j ? j : i;

			putchar(first_digit + '0');
			putchar(second_digit + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
