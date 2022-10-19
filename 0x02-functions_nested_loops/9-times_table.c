#include "main.h"

/**
 * times_table: prints the 9 time table starting from 0
 *
 * Return: times tabel starting from 0 to 9 times 
 */
void times_table(void)
{
	int row, col, mul;

	for(row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for(col = 1; col <= 9; col++)
		{
			mul = (row * col);
			if((mul / 10) > 0)
			{
				_putchar((mul / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mul % 10) + '0');

			if(col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
