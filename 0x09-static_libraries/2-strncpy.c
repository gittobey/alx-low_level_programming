#include "main.h"
/**
 * _strncpy - function that copies a string.
 *
 * @dest: Destination string
 * @src: String to be copied
 * @n: number of bytes to use
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
