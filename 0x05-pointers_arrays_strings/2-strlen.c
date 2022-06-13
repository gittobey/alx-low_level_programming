#include "main.h"

/*
 * strlen - a function that returns the length of a string
 * @s: the string value
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
