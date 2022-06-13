#include "main.h"
/*
 * swap - swaps the values of two integers.
 * @a: value1
 * @b: value2
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
