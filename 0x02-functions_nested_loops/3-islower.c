#include "main.h"

/**
 * _islower - check if char is lower case
 * @c: is the char to be checked
 * Return: 1 for lower case character or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
