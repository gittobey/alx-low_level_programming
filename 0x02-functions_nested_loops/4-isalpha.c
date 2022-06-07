#include "main.h"

/**
 *  * _isalpha - checks for alphabets
 *   * @c: the input to be checked
 *    *
 *     * Return: 1 if lower and 0 otherwise
 *      */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
