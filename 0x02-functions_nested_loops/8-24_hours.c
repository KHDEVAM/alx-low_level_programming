#include "main.h"
/**
 * jack_bauer - my program
 * Description: prints every minute of the day of Jack Bauer.
 * Return: Void
 */
void jack_bauer(void)
{
	int z, y, x, w;

	for (z = 0; z <= 2; z++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((z <= 1 && y <= 9) || (z <= 2 && y <= 3))
			{
				for (x = 0; x <= 5; x++)
				{
					for (w = 0; w <= 9; w++)
					{
						_putchar(z + '0');
						_putchar(y + '0');
						putchar(58);
						_putchar(x + '0');
						_putchar(w + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
