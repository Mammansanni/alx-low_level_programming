#include "main.h"

/**
 * print_binary - a function that prints the binary rep of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int cur;

	for (m = 63; m >= 0; m--)
	{
		cur = n >> m;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
