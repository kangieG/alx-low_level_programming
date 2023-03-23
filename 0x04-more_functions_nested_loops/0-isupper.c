#include "main.h"

/**
 *_isupper - checks for uppercase letters
 *@c: character to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (0);
	else
		return (1);
}
