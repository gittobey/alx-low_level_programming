#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point for the main functn
* Return:1 
*/
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, ch);
	return (1);
}
