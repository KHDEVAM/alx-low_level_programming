#include "main.h"
/**
 * times_table - my program
 * Description: prints the 9 times table, starting with 0
 * Return: nothing (void)
 */
void times_table(void)
{
	int l, m, n, o, p;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			n = l * m;
			if (n > 9)
			{
				o = n % 10;
				p = (n - o) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(p + '0');
				_putchar(o + '0');
			}
			else
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
