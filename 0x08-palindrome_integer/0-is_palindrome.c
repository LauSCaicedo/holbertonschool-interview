#include "palindrome.h"

/**
 * is_palindrome - Function that checks whether or not
 * a given unsigned integer is a palindrome.
 * @n: Is the number to be checked.
 * Return: 1 if n is a palindrome, and 0 otherwise.
 */

int is_palindrome(unsigned long n)
{
	unsigned long value, rever = 0;
	value = n;
	while (value != 0)
	{
		rever = (rever * 10) + (value % 10);
		value /= 10;
	}

	if (n == rever)
		return 1;
	else
		return 0;
}
