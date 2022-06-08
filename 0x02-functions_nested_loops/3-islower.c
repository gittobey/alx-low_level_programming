#include "main.h"

/*
*_islower - checks for lower case
*returns 1 if lower case
*returns 0 if not
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
