#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: variable pointer
 * @b: variable pointer
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
