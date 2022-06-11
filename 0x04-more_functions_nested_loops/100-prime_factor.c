#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: void
*/
int main(void)
{
	long long int num = 612852475143;
	long long int fin, div;
	int val;

	fin = num;

	while (fin != 1)
	{
		div = 2;
		val = 1;

		while (val != 0)
		{
			val = num % div;

			if (val == 0)
			{
				num = num / div;
				fin = num / div;
			}
			div++;
		}
	}
	printf("%lld\n", div - 1);
}
