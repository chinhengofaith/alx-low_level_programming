#include "main.h"
/**
 * _abs -  functio to compute the absolute value of an integer
 * @av: integer input
 * Return: absolute value of ab
 */
int _abs(int av)
{
	return (av * ((av > 0) - (av < 0)));
}
