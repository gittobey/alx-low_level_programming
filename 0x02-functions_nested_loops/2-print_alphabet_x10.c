#include "main.h"

/**
*  * print_alphabet_x10 - print alphabets in lower case
*   *
*    * Return: void
*/
void print_alphabet_x10(void)
{
	int x;
	int i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 26; i++)
		{
		_putchar(97 + i);
		}
		_putchar('\n');
	}
}
