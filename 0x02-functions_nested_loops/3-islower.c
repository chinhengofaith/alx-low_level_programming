#include "main.h"

/**
 * _islower - a function to check for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase,otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
