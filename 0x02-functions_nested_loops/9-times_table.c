#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: empty output
 */


void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if((c / 10) == 0)

				if (b == 0)
				{
					_putchar

