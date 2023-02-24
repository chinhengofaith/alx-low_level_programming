#include <stdio.h>
#include "main.h"
/**
 * _isdigit - function that checks for uppercase character.
 * @c: the ascii value
 * return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	return (0);
}
