#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - main block
 *   * Description: prints all single digit numbers of base 10
 *    * starting from 0, followed by a new line.
 *     * Return: 0
 *      */
int main(void)
{
	int a=0;
	int b = 0;
	
	while (b < 10)
	{
		a= 0;
		while (a < 10)
		{
			if (a+b != 18 && a>b)
			{	
				if (a+b!=17){
					putchar('0'+b);
					putchar('0'+a);
					putchar(',');
					putchar(' ');
				}
				else if (a+b==17){
					putchar('0' +b);
					putchar('0'+a);
					putchar('\n');
				}

			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return(0);
}
