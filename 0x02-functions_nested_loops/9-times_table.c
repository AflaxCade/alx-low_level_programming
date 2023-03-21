#include "main.h"

/**
 * times_table - prints the n times table, starting with 0
 * @n: the number of times table to print
 *
 * Return: void
 */
void times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else if (i * j < 100)
			{
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			else
			{
				_putchar(i * j / 100 + '0');
				_putchar(i * j / 10 % 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
