#include <stdio.h>
#include <stdlib.h>
/**
*  * main - main block
*   * Description: prints all single digit numbers of base 10
*    * starting from 0, followed by a new line.
*     *     * Return: 0
*/
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (c < 10)
	{
		b = 1;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a > b && b > c)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);
					if (a + b + c <= 23)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
