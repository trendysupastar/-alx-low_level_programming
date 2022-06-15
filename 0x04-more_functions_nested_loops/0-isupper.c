#include "main.h"
#include "holberton.h"

/**
 * _isupper - A function that checks if an alphabet is an uppercase
 * @c: Input
 * Return: 1 if c is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
