#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - main block
 *   * Description: prints all single digit numbers of base 10
 *    * starting from 0, followed by a new line.
 *     * Return: 0
 */
int main(void)
{
	int a=0;
	int b = 0;
	
	while (b < 10)
	{
		a =0;
		while (a < 10)
		{
			if (a + b != 18 && b>a)
			{
				putchar('0'+b);
				putchar('0'+a);
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}