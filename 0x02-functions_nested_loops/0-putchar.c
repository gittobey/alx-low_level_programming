#include "_putchar.h"

/**
*  *  * main -  prints _putchar, followed by a new line
*   * Return: Always 0 (Success)
*/
int main(void)
{
	char word[] = "_putchar";
	int i=0;
	while (i <9)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
