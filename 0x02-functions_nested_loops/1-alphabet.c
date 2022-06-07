#include "main.h"

/**
*  * print_alphabet - print alphabets in lower case
*   *
*    * Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 1; i < 27; i++)
	{
		_putchar(97 + i);
	}
	_putchar('\n');
}
