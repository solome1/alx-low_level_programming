#include "main.h"

/**
  *print_sign - print the sign of the number
  *@n the number to be checked
  *
  * 
  * Return 1 for positive number, -1 for negative number, 0 for zero
  */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
