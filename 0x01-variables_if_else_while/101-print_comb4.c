#include <stdio.h>
/**
 * main - main function
 * Description:  prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				int first_digit = i < j ? (i < k ? i : k) : (j < k ? j : k);
				int second_digit = (i < j && i < k) ? (j < k ? j : k) :
					(j < i && j < k ? i : k);
				int third_digit = (i < j && i < k) ? (j < k ? k : j) :
					(j < i && j < k ? k : i);

				putchar(first_digit + '0');
				putchar(second_digit + '0');
				putchar(third_digit + '0');
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
